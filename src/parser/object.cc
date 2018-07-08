#include "object.hh"

Object::Object(int n) : n_(n)
{}

int
Object::n_get() const
{
  return n_;
}
