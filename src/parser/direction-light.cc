#include "direction-light.hh"

namespace light
{
  DirectionLight::DirectionLight(float r, float g, float b, vec dir) :
    Light(r, g, b), dir_(dir)
    {}

  AmbientLight::vec
  DirectionLight::dir_get() const
  {
    return dir_;
  }

  void
  DirectionLight::print() const
  {
      std::cout << "direction_light ";
      color_.print();
      std::cout << std::endl;
      dir_.print();
      std::cout << std::endl;
  }

  std::string
  DirectionLight::type_get(){
      return "directional";
  }
}
