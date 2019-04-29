#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "color.hh"
#include "light.hh"
#include "object.hh"
#include "parser.hh"
#include "vector3.hh"

using vec = vector::Vector3;

class PPM
{
    public:
        /* Constructor */
        PPM(std::string file_out, int width, int height);

        /* Methods */
        bool write(std::vector<std::vector<RGB>>);

        std::vector<std::vector<RGB>>
        compute(std::vector<std::vector<vec>> list_inter_double, Parser p, std::vector<Object> objects);
    private:
        /* Attributes */
        std::string file_out_;
        int width_;
        int height_;
};
