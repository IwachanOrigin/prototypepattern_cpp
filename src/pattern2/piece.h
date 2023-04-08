
#ifndef PIECE_H_
#define PIECE_H_

#include "cloneable.h"
#include "location.h"
#include <string>

namespace design_pattern
{

class Piece : public Cloneable
{
public:
  explicit Piece() : m_location(nullptr) {}
  virtual ~Piece()
  {
    if (m_location)
    {
      delete m_location;
      m_location = nullptr;
    }
  }

  std::string name() const { return m_name; }
  Location* location() const { return m_location; }
  void setName(const std::string name) { m_name = name; }
  void setLocation(Location* location) { m_location = location; }
  void move(const int x, const int y) { m_location->move(x, y); }

  Cloneable* clone()
  {
    Piece* pClone = new Piece();
    pClone->setLocation((Location*) m_location->clone());
    return pClone;
  }

private:
  std::string m_name;
  Location* m_location;
};

} // design_pattern

#endif // PIECE_H_
