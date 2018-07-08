#pragma once

#include "ambient-light.hh"

namespace light
{
  class DirectionLight : public AmbientLight
  {
    public:
      /* Constructor */
      DirectionLight(float r, float g, float b, vec dir);

      /* getter */
      vec dir_get() const;
      private:
        vec dir_;
  };
}
