#include "object.hh"

Object::Object(int n) : n_(n),  ka_(RGB(0,0,0)), kd_(RGB(0,0,0)), ks_(RGB(0,0,0))
                        , ns_(0), ni_(1), nr_(0), d_(1)
{
    list_vertices_ = std::vector<Vertice>();
    list_vertices_normal_ = std::vector<Vertice>();
}

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

std::vector<Vertice>
Object::list_vertices_get() const
{
  return list_vertices_;
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

void
Object::add_vertice(const Vertice ver, bool is_n)
{
    if (!is_n)
        list_vertices_.push_back(ver);
    else
        list_vertices_normal_.push_back(ver);
}

std::tuple<Object::vec,Object::vec>
Object::point_get(int pos) const
{
    return std::tuple<Object::vec,Object::vec>(list_vertices_.at(pos).coord_get(), list_vertices_normal_.at(pos).coord_get());
}

void
Object::print() const
{
    std::cout << "object " << n_ << std::endl << "Ka ";
    ka_.print();
    std::cout << std::endl << "Kd ";
    kd_.print();
    std::cout << std::endl << "Ks ";
    ks_.print();
    std::cout << std::endl;
    std::cout << "Ns " << ns_ << std::endl;
    std::cout << "Ni " << ni_ << std::endl;
    std::cout << "Nr " << nr_ << std::endl;
    std::cout << "d "  << d_ << std::endl;
    std::cout << std::endl;
    for (auto v : list_vertices_)
        v.print();
    std::cout << std::endl;
}
