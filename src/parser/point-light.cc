#include "point-light.hh"

namespace light
{
  PointLight::PointLight(float r, float g, float b, vec pos) :
            Light(r, g, b), pos_(pos)
  {}

  AmbientLight::vec
  PointLight::pos_get() const
  {
    return pos_;
  }

  void
  PointLight::print() const
  {
      std::cout << "point_light ";
      color_.print();
      std::cout << std::endl;
      pos_.print();
      std::cout << std::endl;
  }

  std::string
  PointLight::type_get(){
      return "point";
  }
}
