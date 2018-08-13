#include "vertice.hh"

Vertice::Vertice(vec coord, bool n) : coord_(coord) , is_n_(n)
{}

Vertice::vec
Vertice::coord_get() const
{
  return coord_;
}

bool
Vertice::is_n_get() const
{
  return is_n_;
}
