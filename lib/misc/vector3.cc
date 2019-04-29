#include "vector3.hh"

namespace vector
{
  Vector3::Vector3()
  {}

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
    return Vector3(x_ - other.x_, y_ - other.y_, z_ - other.z_);
  }

  Vector3
  Vector3::operator*(const float coeff) const
  {
    return Vector3(x_ * coeff, y_ * coeff, z_ * coeff);
  }

  Vector3
  Vector3::operator*(const double coeff) const
  {
    return Vector3(x_ * coeff, y_ * coeff, z_ * coeff);
  }

  float
  Vector3::dot_product(const Vector3 other) const
  {
    return x_ * other.x_ + y_ * other.y_ + z_ * other.z_;
  }

  Vector3
  Vector3::cross_product(const Vector3 other) const
  {
    return Vector3(y_ * other.z_ - z_ * other.y_, z_ * other.x_ - x_ * other.z_
                   , x_ * other.y_ - y_ * other.x_);
  }

  Vector3
  Vector3::normalize() const
  {
      auto bottom = sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
      auto x = (x_) / (bottom);
      auto y = (y_) / (bottom);
      auto z = (z_) / (bottom);
      return Vector3(x, y, z);
  }

  Vector3
  Vector3::compute(const Vector3 other) const
  {
      return Vector3(other.x_ - x_, other.y_ - y_, other.z_ - z_);
  }

  void
  Vector3::print() const
  {
      std::cout << x_ << " " << y_ << " " << z_;
  }
}
