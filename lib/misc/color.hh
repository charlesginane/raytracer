#pragma once

class RGB
{
  public:
    /* Constructor */
    RGB(float r, float g, float b);

    /* Getters */
    float r_get() const;
    float g_get() const;
    float b_get() const;
  private:
    /* attributes */
    float r_;
    float g_;
    float b_;
};
