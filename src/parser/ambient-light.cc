#include "ambient-light.hh"

namespace light
{
  AmbientLight::AmbientLight(float r, float g, float b) : r_(r), g_(g), b_(b)
  {}

  float
  AmbientLight::r_get() const
  {
    return r_;
  }

  float
  AmbientLight::g_get() const
  {
    return b_;
  }

  float
  AmbientLight::b_get() const
  {
    return g_;
  }

  void
  AmbientLight::print() const
  {
    std::cout << "ambient_light " << r_ << " " << g_ << " " << b_ << std::endl;
  }
}
