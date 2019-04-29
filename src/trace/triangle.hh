#pragma once

#include <tuple>

#include "vector3.hh"

class Triangle
{
    public:
        using vec = vector::Vector3;

        /* Constructor */
        Triangle(std::tuple<vec,vec> point_a,
                 std::tuple<vec,vec> point_b,
                 std::tuple<vec,vec> point_c);

        /* Getter */
        std::tuple<vec,vec> point_a_get() const;
        std::tuple<vec,vec> point_b_get() const;
        std::tuple<vec,vec> point_c_get() const;

    private:
        /* Attributes */
        std::tuple<vec,vec> point_a_;
        std::tuple<vec,vec> point_b_;
        std::tuple<vec,vec> point_c_;
};
