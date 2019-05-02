#include "color.hh"

RGB::RGB(float r, float g, float b) : r_(r), g_(g), b_(b)
{}

void
RGB::print() const {
    std::cout << r_ << " " << g_ << " " << b_;
}

float
RGB::r_get() const {
  return r_;
}

float
RGB::g_get() const {
  return g_;
}

float
RGB::b_get() const {
  return b_;
}

bool
RGB::operator==(const RGB other) const {
    return other.r_ == r_ && other.g_ == g_ && other.b_ == b_;
}

bool
RGB::operator!=(const RGB other) const {
    return !(*this == other);
}

RGB
RGB::operator*(const RGB other) const {
    return RGB(r_ * other.r_, g_ * other.g_, b_ * other.b_);
}

RGB
RGB::operator*(const float coeff) const {
    return RGB(r_ * coeff, g_ * coeff, b_ * coeff);
}
