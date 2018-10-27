#pragma once

#include "vector3.hh"

class Vertice
{
  public:
    using vec = vector::Vector3;
    /* Constructor */
    Vertice(vec coord, bool n);

    /* Getters */
    vec coord_get() const;
    bool is_n_get() const;

    /* Methods */
    void print() const;

  private:
    /* attributes */
    vec coord_;
    bool is_n_;
};
