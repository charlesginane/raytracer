#include "point-light.hh"

namespace light
{
  PointLight::PointLight(float r, float g, float b, vec pos) :
            AmbientLight(r, g, b), pos_(pos)
  {}

  AmbientLight::vec
  PointLight::pos_get() const
  {
    return pos_;
  }

  void
  PointLight::print() const
  {
      std::cout << "point_light " << r_ << " " << g_ << " " << b_ << " ";
      pos_.print();
      std::cout << std::endl;
  }
}
