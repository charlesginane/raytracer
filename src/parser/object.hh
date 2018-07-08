#pragma once

class Object
{
  public:
    /* Constructor */
    Object(int n);

    /* Getter */
    int n_get() const;
  private:
    int n_;
};
