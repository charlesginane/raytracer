#include "vector3.hh"

namespace vector
{
  Vector3::Vector3(float x, float y, float z) : x_(x), y_(y), z_(z)
  {}

  float
  Vector3::x_get() const
  {
    return x_;
  }

  float
  Vector3::y_get() const
  {
    return y_;
  }

  float
  Vector3::z_get() const
  {
    return z_;
  }

  void
  Vector3::vector_set(float x, float y, float z)
  {
    x_ = x;
    y_ = y;
    z_ = z;
  }

  Vector3
  Vector3::operator+(const Vector3 other) const
  {
    return Vector3(x_ + other.x_, y_ + other.y_, z_ + other.z_);
  }

  Vector3
  Vector3::operator-(const Vector3 other) const
  {
    return Vector3(x_ - other.x_, y_ - other.y_, z_ + other.z_);
  }

  Vector3
  Vector3::operator*(const float coeff) const
  {
    return Vector3(x_ * coeff, y_ * coeff, z_ * coeff);
  }
}
