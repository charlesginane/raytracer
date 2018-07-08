#include <iostream>

#include "vector3.hh"

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    std::cerr << "usage: ./raytracer <input.svati> <output>" << std::endl;
    return 1;
  }
  return 0;
}
