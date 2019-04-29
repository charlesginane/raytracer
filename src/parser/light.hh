#pragma once

#include "color.hh"
#include "vector3.hh"

namespace light {
    class Light {
        public:
            using vec = vector::Vector3;

            Light(float r, float g, float b);
            virtual ~Light() = default;

            virtual void print() const;
            virtual RGB color_get() const;
            virtual std::string type_get() { return "nope";}

        protected:
          /* Attributes */
          RGB color_;

    };
}
