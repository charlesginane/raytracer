#pragma once

#include <iostream>
#include <vector>

#include "intersection.hh"
#include "outgoing_screen.hh"
#include "parser.hh"
#include "ray.hh"
#include "triangle.hh"

std::vector<std::vector<vec>> trace_obj(Parser parser);
