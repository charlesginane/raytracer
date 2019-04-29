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
    for (auto list_inter : list_inter_double)
    {
        for (auto inter : list_inter)
        {
            auto pos_x = ((inter.x_get())) + (width_ / 2);
            auto pos_y = ((inter.y_get())) + (height_ / 2);
            for (auto light : p.lights_get()) {
                light->color_get();
                list_RGB.at(abs(pos_y)).at(abs(width_ - pos_x)) = (objects.at(0).ka_get() * light->color_get());
            }
         }
         ++i;
    }
    return list_RGB;
}
