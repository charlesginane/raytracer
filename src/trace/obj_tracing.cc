#include "obj_tracing.hh"

std::vector<std::vector<vec>>
trace_obj(Parser parser)
{
    auto list_triangle = std::vector<Triangle>();
    auto list_ray = z_back(parser.camera_get());
    auto double_list_inter = std::vector<std::vector<vec>>();
    for (auto obj : parser.objects_get())
    {
        for (int i = 0; i < obj.n_get(); i += 3)
        {
            auto pointA = obj.point_get(i);
            auto pointB = obj.point_get(i + 1);
            auto pointC = obj.point_get(i + 2);
            list_triangle.push_back(Triangle(pointA, pointB, pointC));
        }

        auto list_inter = std::vector<vec>();

        int nb_inter = 0;
        for (auto triangle : list_triangle)
        {
            for (auto ray : list_ray)
            {
                vector::Vector3 inter;
                if(check_intersection(ray, triangle, inter, parser.camera_get()) == true)
                {
                    nb_inter++;
                    list_inter.push_back(ray.pos_get());
                }
            }

            double_list_inter.push_back(list_inter);
        }
    }
    return double_list_inter;
}
