#include <iostream>
#include <string>

#include "outgoing_screen.hh"
#include "obj_tracing.hh"
#include "parser.hh"
#include "ppm.hh"
#include "vector3.hh"

int main(int argc, char **argv)
{

    using vec = vector::Vector3;
    if (argc < 2)
    {
        std::cerr << "usage: ./raytracer <input.svati> <output>" << std::endl;
        return 1;
    }
    Parser parser = Parser(argv[1]);
    if (parser.parse() == false)
        return 2;

    auto list_inter_double = trace_obj(parser);

    auto out = PPM("out.ppm", parser.camera_get().width_get(), parser.camera_get().height_get());
    auto res = out.compute(list_inter_double, parser, parser.objects_get());
    out.write(res);

    for (auto l : parser.lights_get())
        delete l;

    return 0;
}
