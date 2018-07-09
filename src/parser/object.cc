#include "object.hh"

Object::Object(int n) : n_(n),  ka_(RGB(0,0,0)), kd_(RGB(0,0,0)), ks_(RGB(0,0,0))
                        , ns_(0), ni_(1), nr_(0), d_(1)
{}

int
Object::n_get() const
{
  return n_;
}

RGB
Object::ka_get() const
{
  return ka_;
}

RGB
Object::kd_get() const
{
  return kd_;
}

RGB
Object::ks_get() const
{
  return ks_;
}

float
Object::ns_get() const
{
  return ns_;
}

float
Object::ni_get() const
{
  return ni_;
}

float
Object::nr_get() const
{
  return nr_;
}

float
Object::d_get() const
{
  return d_;
}

void
Object::ka_set(RGB ka)
{
  ka_ = ka;
}

void
Object::kd_set(RGB kd)
{
  kd_ = kd;
}

void
Object::ks_set(RGB ks)
{
  ks_ = ks;
}

void
Object::ns_set(float ns)
{
  ns_ = ns;
}

void
Object::ni_set(float ni)
{
  ni_ = ni;
}

void
Object::nr_set(float nr)
{
  nr_ = nr;
}

void
Object::d_set(float d)
{
  d_ = d;
}
