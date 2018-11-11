#pragma once

#include "vector3.hh"

class Ray
{
    public:
        using vec = vector::Vector3;

        /* Constructor */
        Ray();
        Ray(vec pos, vec direction);

        /* Getters */
        vec pos_get() const;
        vec direction_get() const;

        /* Methods */
        void print() const;

    private:
        /* Attributes */
        vec pos_;
        vec direction_;
};
