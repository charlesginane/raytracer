#include "intersection.hh"

bool check_intersection(Ray ray, Triangle in_triangle, vector::Vector3& inter, Camera cam)
{
    auto point_triangle_A = std::get<0>(in_triangle.point_a_get());
    auto point_triangle_B = std::get<0>(in_triangle.point_b_get());
    auto point_triangle_C = std::get<0>(in_triangle.point_c_get());
    auto line1 = point_triangle_B - point_triangle_A;
    auto line2 = point_triangle_C - point_triangle_A;

    auto h = ray.direction_get().cross_product(line2);
    float a = line1.dot_product(h);

    if (a > -EPSILON && a < EPSILON)
        return false;

    float f = 1.0 / a;
    auto s = ray.pos_get() - point_triangle_A;
    float u = f * (s.dot_product(h));
    if (u < 0.0 || u > 1.0)
        return false;

    auto q = s.cross_product(line1);
    float v = f * (ray.direction_get().dot_product(q));
    if (v < 0.0 || u + v > 1.0)
        return false;

    float t = f * line2.dot_product(q);
    if (t > EPSILON)
    {
        inter = ray.pos_get() + (ray.direction_get() * t);
        return true;
    }
    else
        return false;
}
