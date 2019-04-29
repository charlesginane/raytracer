#include "ambient-light.hh"

namespace light
{
  AmbientLight::AmbientLight(float r, float g, float b) : Light(r,g,b)
  {}

  RGB
  AmbientLight::color_get() const {
      return color_;
  }

  void
  AmbientLight::print() const
  {
    std::cout << "ambient_light ";
    color_.print();
    std::cout << std::endl;
  }

  std::string
  AmbientLight::type_get(){
      return "ambient";
  }
}
