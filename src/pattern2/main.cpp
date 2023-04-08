
#include <iostream>
#include <memory>
#include "piece.h"

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::unique_ptr<Piece> pFuA = std::make_unique<Piece>();
  pFuA->setName("FU");
  pFuA->setLocation(new Location(1, 7));
  pFuA->move(0, -1);

  std::unique_ptr<Piece> pFuB = std::make_unique<Piece>();
  pFuB->setName("FU");
  pFuB->setLocation(new Location(2, 7));
  pFuB->move(0, -1);

  std::cout << "[ first FU ]" << std::endl;
  std::cout << "name : " << pFuA->name() << std::endl;
  std::cout << "PositionX : " << pFuA->location()->x() << std::endl;
  std::cout << "PositionY : " << pFuA->location()->y() << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << "[ second FU ]" << std::endl;
  std::cout << "name : " << pFuB->name() << std::endl;
  std::cout << "PositionX : " << pFuB->location()->x() << std::endl;
  std::cout << "PositionY : " << pFuB->location()->y() << std::endl;

  return 0;
}

