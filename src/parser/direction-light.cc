#include "direction-light.hh"

namespace light
{
  DirectionLight::DirectionLight(float r, float g, float b, vec dir) :
    AmbientLight(r, g, b), dir_(dir)
    {}

  AmbientLight::vec
  DirectionLight::dir_get() const
  {
    return dir_;
  }

  void
  DirectionLight::print() const
  {
      std::cout << "direction_light " << r_ << " " << g_ << " " << b_ << " ";
      dir_.print();
      std::cout << std::endl;
  }
}
