#include <iostream>
#include <string>

#include "outgoing_screen.hh"
#include "parser.hh"
#include "vector3.hh"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "usage: ./raytracer <input.svati> <output>" << std::endl;
        return 1;
    }
    Parser parser = Parser(argv[1]);
    if (parser.parse() == false)
        return 2;
    parser.print();

    auto list_ray = z_back(parser.camera_get());
    for (auto ele : list_ray)
        ele.print();
    return 0;
}
