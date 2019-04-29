#pragma once

#include "camera.hh"
#include "triangle.hh"
#include "ray.hh"
#include "vector3.hh"

using vec = vector::Vector3;

const float EPSILON = 0.1;

bool check_intersection(Ray ray, Triangle in_triangle, vec& inter, Camera cam);
