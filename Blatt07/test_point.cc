#include <iostream>

#include "point.cpp"

int main(int argc, char **argv)
{
  // 1-DIMENSIONAL POINT
  // create point with dim = 1
  Point<int, 1> p1;

  // check dimension
  if (p1.dimension != 1)
    return 1;

  // set coordinate to 4
  p1.coord(0) = 4;

  // check if point is accessible
  if (p1.coord(0) != 4)
    return 1;
  // check norm

  // 3-DIMENSIONAL POINT
  // create point with dim = 3
  Point<double, 3> p3 = {{0.1, 1.2, 2.3}};

  // check dimension
  if (p3.dimension != 3)
    return 1;

  // check if point is accessible
  if (p1.coord(0) != 4)
    return 1;

  return 0;
}
