#pragma once

namespace light
{
  class AmbienLight
  {
    public:
      /* Constructor */
      AmbienLight(float r, float g, float b);

      /* Getters */
      float r_get() const;
      float g_get() const;
      float b_get() const;

    private:
      /* Attributes */
      float r_;
      float g_;
      float b_;
  };
}
