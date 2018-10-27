#pragma once

#include "vector3.hh"

namespace light
{
  class AmbientLight
  {
    public:
      using vec = vector::Vector3;
      /* Constructor */
      AmbientLight(float r, float g, float b);

      /* Methods */
      virtual void print() const;

      /* Getters */
      float r_get() const;
      float g_get() const;
      float b_get() const;

    protected:
      /* Attributes */
      float r_;
      float g_;
      float b_;
  };
}
