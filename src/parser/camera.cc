#include "camera.hh"

Camera::Camera()
{}

Camera::Camera(int width, int height, vec pos, vec u, vec v, float fov) :
                width_(width), height_(height), pos_(pos),
                u_(u), v_(v), fov_(fov)
{}

int
Camera::width_get() const
{
  return width_;
}

int
Camera::height_get() const
{
  return height_;
}

Camera::vec
Camera::pos_get() const
{
  return pos_;
}

Camera::vec
Camera::u_get() const
{
  return u_;
}

Camera::vec
Camera::v_get() const
{
  return v_;
}

float
Camera::fov_get() const
{
  return fov_;
}
