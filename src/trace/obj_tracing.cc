#include "obj_tracing.hh"

std::vector<std::vector<vec>>
trace_obj(Parser parser)
{
    auto list_triangle = std::vector<Triangle>();
    auto list_ray = z_back(parser.camera_get());
    auto double_list_inter = std::vector<std::vector<vec>>();
    std::cout << parser.objects_get().size() << std::endl;
    for (auto obj : parser.objects_get())
    {
        //std::cout << obj.n_get() << std::endl;
        for (int i = 0; i < obj.n_get(); i += 3)
        {
            // std::cout << i << std::endl;
            auto pointA = obj.point_get(i);
            auto pointB = obj.point_get(i + 1);
            auto pointC = obj.point_get(i + 2);
            list_triangle.push_back(Triangle(pointA, pointB, pointC));
        }

        auto list_inter = std::vector<vec>();

        int nb_inter = 0;
        std::cout << "[INFO] Found " << list_triangle.size() << " triangles." <<std::endl;
        // for (int i = 0; i < list_triangle.size(); ++i) {
        //     std::cout << "triangle " << i << " : ";
        //     list_triangle.at(i).print();
        // }
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
    std::cout << "[INFO] end of obj_tracing" << std::endl;
    return double_list_inter;
}
