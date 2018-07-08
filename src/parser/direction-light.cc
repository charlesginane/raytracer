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
}
