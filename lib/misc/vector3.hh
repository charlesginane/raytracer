#pragma once

#include <cmath>
#include <iostream>

namespace vector
{
class Vector3
{
  public:
      /* Constructor */
      Vector3(float x, float y, float z);

      Vector3();

      /* Methods */
      void print() const;

      /* getters */
      float x_get() const;
      float y_get() const;
      float z_get() const;

      /* setters */
      void vector_set(float x, float y, float z);

      /* operators */
      Vector3 operator+(const Vector3 other) const;

      Vector3 operator-(const Vector3 other) const;

      Vector3 operator*(const float coeff) const;

      Vector3 operator*(const double coeff) const;

      float dot_product(const Vector3 other) const;

      Vector3 cross_product(const Vector3 other) const;

      Vector3 normalize() const;

      Vector3 compute(const Vector3 other) const;

      /// Return the distance of the vector.
      float distance_get() const;
    private:
      /* Atributes */
      float x_;
      float y_;
      float z_;
  };
}
