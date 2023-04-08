
#ifndef CLONEABLE_H_
#define CLONEABLE_H_

namespace design_pattern
{

class Cloneable
{
public:
  Cloneable() = default;
  ~Cloneable() = default;
  virtual Cloneable* clone() = 0;
};

} // design_pattern

#endif // CLONEABLE_H_
