#include "triangle.hh"

Triangle::Triangle(std::tuple<Triangle::vec,Triangle::vec> point_a,
                   std::tuple<Triangle::vec,Triangle::vec> point_b,
                   std::tuple<Triangle::vec,Triangle::vec> point_c) :
                                                            point_a_(point_a),
                                                            point_b_(point_b),
                                                            point_c_(point_c)
{}

std::tuple<Triangle::vec,Triangle::vec>
Triangle::point_a_get() const
{
    return point_a_;
}

std::tuple<Triangle::vec,Triangle::vec>
Triangle::point_b_get() const
{
    return point_b_;
}

std::tuple<Triangle::vec,Triangle::vec>
Triangle::point_c_get() const
{
    return point_c_;
}

void
Triangle::print() const
{
    std::get<0>(point_a_).print();
    std::cout << std::endl << "\t     ";
    std::get<0>(point_b_).print();
    std::cout << std::endl << "\t     ";
    std::get<0>(point_c_).print();
    std::cout << std::endl;
}
