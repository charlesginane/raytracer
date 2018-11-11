#include "outgoing_screen.hh"

std::vector<Ray>
z_back(Camera cam)
{
    std::vector<Ray> ray_list;
    auto u = cam.u_get().normalize();
    auto v = cam.v_get().normalize();
    auto w = u.cross_product(v);
    auto L = (cam.width_get() / 2) / (tan(cam.fov_get() / 2));
    auto C = cam.pos_get() + w * L ;
    for (auto i = -(cam.width_get()) / 2; i < (cam.width_get() / 2); ++i)
    {
        for (auto j = -(cam.height_get()) / 2; j < (cam.height_get()) / 2; ++j)
        {
            auto point = vector::Vector3(C.x_get() + i * u.x_get() + j * v.x_get(), C.y_get() + i * u.y_get() + j * v.y_get(), C.z_get() + i * u.x_get() + j * v.z_get());
            auto outgoing_vec = point.compute(cam.pos_get());
            ray_list.push_back(Ray(point, outgoing_vec));
        }
    }
    return ray_list;
}
