#include "ray.hh"

Ray::Ray(vec pos, vec direction) : pos_(pos), direction_(direction)
{}

Ray::vec
Ray::pos_get() const
{
    return pos_;
}

Ray::vec
Ray::direction_get() const
{
    return direction_;
}

void
Ray::print() const
{
    std::cout << "pos ";
    pos_.print();
    std::cout << " " << "dir ";
    direction_.print();
    std::cout << std::endl;
}
