#include "color.hh"

RGB::RGB(float r, float g, float b) : r_(r), g_(g), b_(b)
{}

void
RGB::print() const
{
    std::cout << r_ << " " << g_ << " " << b_;
}

float
RGB::r_get() const
{
  return r_;
}

float
RGB::g_get() const
{
  return g_;
}

float
RGB::b_get() const
{
  return b_;
}
