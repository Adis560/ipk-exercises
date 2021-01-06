/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 1: Flächenberechnung für Polynome
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <vector>
#include "point.hh"
#include "polygon.hh"

Polygon::Polygon(const std::vector<Point> &corners) : _Points(corners){};

Polygon::Polygon(const std::vector<double> &x, const std::vector<double> &y)
{
    for (int i = 0; i < x.size(); i++)
    {
        Polygon::_Points[i] = Point(x[i], y[i]);
    }
};

std::size_t corners()
{
    return Polygon::_Points;
};

const Point &corner(std::size_t i) { return Polygon::_Points[i]; };