/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2021-01-15 | Aufgabenblatt 7 - Aufgabe 1: Punkte im R^d
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <array>
#include <iostream>
#include <math.h>
#ifndef POINT_HH
#define POINT_HH

template <typename Coord, int dim>

class Point
{
public:
    using Coordinate = Coord;
    static const int dimension = dim;
    Coord &operator[](int i) { return _coord[i]; };
    const Coord &operator[](int i) const { return _coord[i]; };

    Point() : _coord() {}
    Point(const std::array<Coordinate, dim> &coord) : _coord(coord) {}

    Coordinate &x(int i) { return _coord[i]; }

    Coordinate norm() const
    {
        Coord sum;
        for (auto &point : _coord)
        {
            sum += point * point;
        }
        return sqrt(sum);
    }

private:
    std::array<Coord, dim> _coord;
};

#endif // POINT_HH
