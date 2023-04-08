
#ifndef LOCATION_H_
#define LOCATION_H_

namespace design_pattern
{

class Location
{
public:
  explicit Location(const int x, const int y);
  ~Location() = default;

  int x() const { return m_x; }
  int y() const { return m_y; }
  void move(const int x, const int y);

private:
  int m_x;
  int m_y;
};

} // design_pattern

#endif // LOCATION_H_
