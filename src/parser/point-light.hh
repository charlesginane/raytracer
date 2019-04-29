#pragma once

#include "ambient-light.hh"
#include "light.hh"
#include "vector3.hh"

namespace light
{
  class PointLight : public Light
  {
  public:
      /* Constructor */
      PointLight(float r, float g, float b, vec pos);

      vec pos_get() const;

      /* Methods */
      virtual void print() const;

      virtual std::string type_get() override;

    private:
      vec pos_;
  };
}
