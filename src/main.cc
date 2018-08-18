#include <iostream>
#include <string>

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
    return 0;
}
