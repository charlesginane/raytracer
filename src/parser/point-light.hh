#pragma once

#include "ambient-light.hh"
#include "vector3.hh"

namespace light
{
  class PointLight : public AmbientLight
  {
  public:
      /* Constructor */
      PointLight(float r, float g, float b, vec pos);

      vec pos_get() const;

    private:
      vec pos_;
  };
}
