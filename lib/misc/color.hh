#pragma once

#include <iostream>

class RGB
{
  public:
    /* Constructor */
    RGB(float r, float g, float b);

    /* Methods */
    void print() const;

    /* Getters */
    float r_get() const;
    float g_get() const;
    float b_get() const;

    /* operators */
    bool operator==(const RGB other) const;

    bool operator!=(const RGB other) const;

    RGB operator*(const RGB other) const;

  private:
    /* attributes */
    float r_;
    float g_;
    float b_;
};
