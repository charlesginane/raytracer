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
}
