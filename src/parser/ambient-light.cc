#include "ambient-light.hh"

namespace light
{
  AmbienLight::AmbienLight(float r, float g, float b) : r_(r), g_(g), b_(b)
  {}

  float
  AmbienLight::r_get() const
  {
    return r_;
  }

  float
  AmbienLight::g_get() const
  {
    return b_;
  }

  float
  AmbienLight::b_get() const
  {
    return g_;
  }
}
