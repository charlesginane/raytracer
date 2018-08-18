#pragma once

#include <vector>

#include "color.hh"
#include "vertice.hh"

class Object
{
  public:
    /* Constructor */
    Object(int n);

    /* Getter */
    int n_get() const;
    RGB ka_get() const;
    RGB kd_get() const;
    RGB ks_get() const;
    float ns_get() const;
    float ni_get() const;
    float nr_get() const;
    float d_get() const;
    std::vector<Vertice> list_vertices_get() const;

    /* Setter */
    void ka_set(RGB ka);
    void kd_set(RGB kd);
    void ks_set(RGB ks);
    void ns_set(float ns);
    void ni_set(float ni);
    void nr_set(float nr);
    void d_set(float d);
    
    /* Methods */
    void add_vertice(const Vertice ver);    

  private:
    int n_;
    RGB ka_;
    RGB kd_;
    RGB ks_;
    float ns_;
    float ni_;
    float nr_;
    float d_;
    std::vector<Vertice> list_vertices_;
};
