#pragma once

#include "ambient-light.hh"
#include "light.hh"

namespace light
{
  class DirectionLight : public Light
  {
    public:
      /* Constructor */
      DirectionLight(float r, float g, float b, vec dir);

      /* Methods */
      virtual void print() const;

      /* getter */
      vec dir_get() const;

      virtual std::string type_get() override;

      private:
        vec dir_;
  };
}
