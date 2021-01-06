/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2021-01-15 | Aufgabenblatt 7 - Aufgabe 1: Punkte im R^d
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <array>
#include <iostream>
#ifndef POINT_HH
#define POINT_HH

template <typename Coord, int dim>
class Point
{
private:
    std::array<Coord, dim> _coord;

public:
    Point() : _coord() {}
    Point(const std::array<Coord, dim> &coord)
        : _coord(coord) {}

    Coord coordinate(int x) const
    {
        return _coord[x];
    }
    using Coordinate = Coord;
    static const int dimension = dim;
};

#endif // POINT_HH
