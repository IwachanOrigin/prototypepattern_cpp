
#include "location.h"

using namespace design_pattern;

Location::Location(const int x, const int y)
  : m_x(x)
  , m_y(y)
{
}

void Location::move(const int x, const int y)
{
  m_x += x;
  m_y += y;
}

Cloneable* Location::clone()
{
  Location* pClone = new Location(m_x, m_y);
  return pClone;
}
