#include "ppm.hh"

PPM::PPM(std::string file_out, int width, int height) : file_out_(file_out),
                                                        width_(width),
                                                        height_(height)
{}

bool
PPM::write(std::vector<std::vector<RGB>> list_RGB)
{
    std::ofstream file_out;
    file_out.open(file_out_);
    if (file_out.is_open() == false)
    {
        std::cerr << "Raytracer: Failed to write the ouptut: file not found" << std::endl;
        return false;
    }
    file_out << "P3" << std::endl;
    file_out << width_ << " " << height_ << std::endl;
    file_out << "255" << std::endl << std::endl;

    for (auto rgb : list_RGB)
    {
        for (auto color : rgb)
        {
            file_out << (int)(color.r_get() * 255) << " " << (int)(color.g_get() * 255) << " " << (int)(color.b_get() * 255) << " ";
        }
        file_out << std::endl;
    }
    file_out.close();
    return true;
}

std::vector<std::vector<RGB>>
PPM::compute(std::vector<std::vector<vec>> list_inter_double, Parser p, std::vector<Object> objects)
{
    std::vector<std::vector<RGB>> list_RGB(height_, std::vector<RGB>(width_, RGB(0,0,0)));
    int i = 0;

    // for (auto list_inter : list_inter_double) {
    //     for (auto inter : list_inter) {
    //         std::cout << "x: " << inter.x_get() << " y: " << inter.y_get() << std::endl;
    //     }
    // }
    for (auto list_inter : list_inter_double)
    {
        for (auto inter : list_inter)
        {
            auto pos_x = ((inter.x_get())) + ((width_ - 1) / 2);
            auto pos_y = ((inter.y_get())) + ((height_ - 1) / 2);
            //std::cout << "x: " << pos_x << " y: " << pos_y << std::endl;
            if (abs(pos_x) >= width_ || abs(pos_y) >= height_) {
                std::cout << "Nope" << std::endl;
                continue;
            }
            for (auto light : p.lights_get()) {
                if (dynamic_cast<light::AmbientLight*>(light) != nullptr) {
                    auto x = (width_ - 1) - abs(pos_x);
                    // if (x >= 960) {
                    //     std::cout << "AH" << std::endl;
                    //     std::cout << "x: " << pos_x << std::endl;
                    //     x = abs(width_ - pos_x);
                    // }

                    for (auto object : objects)
                        list_RGB.at(abs(pos_y)).at(x) = (object.ka_get() * light->color_get());
                }

                else if (dynamic_cast<light::PointLight*>(light) != nullptr) {
                    auto x = (width_ - 1) - abs(pos_x);
                    // if (width_ - abs(pos_x) >= 960) {
                    //     x = abs(width_ - pos_x);
                    // }

                    for (auto object : objects) {
                        auto pt_light = dynamic_cast<light::PointLight*>(light);
                        auto distance = (pt_light->pos_get() - vector::Vector3(abs(width_ - pos_x), abs(pos_y), 0)).distance_get();

                        auto color = (object.ka_get() * light->color_get());
                        list_RGB.at(abs(pos_y)).at(x) = color;
                    }
                }
            }
         }
         ++i;
    }
    return list_RGB;
}
