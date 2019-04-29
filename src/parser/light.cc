#include "light.hh"

namespace light {
    Light::Light(float r, float g, float b) : color_(RGB(r, g, b))
    {}


    void
    Light::print() const {
        std::cout << "loul" << std::endl;
    }

    RGB
    Light::color_get() const {
        return color_;
    }

}
