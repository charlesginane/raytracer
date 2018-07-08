#pragma once

#include "vector3.hh"

class Camera
{
  public:
    using vec = vector::Vector3;

    /* Constructor */
    Camera(int width, int height, vec pos, vec u, vec v, float fov);

    /* getters */
    int width_get() const;
    int height_get() const;
    vec pos_get() const;
    vec u_get() const;
    vec v_get() const;
    float fov_get() const;



  private:
    int width_;
    int height_;
    vec pos_;
    vec u_;
    vec v_;
    float fov_;
};
