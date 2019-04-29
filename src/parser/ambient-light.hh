#pragma once

#include "color.hh"
#include "light.hh"
#include "vector3.hh"

namespace light
{
  class AmbientLight : public Light
  {
    public:
      using vec = vector::Vector3;
      /* Constructor */
      AmbientLight(float r, float g, float b);

      /* Methods */
      void print() const override;

      /* Getters */
      RGB color_get() const override;

      virtual std::string type_get() override;

  };
}
