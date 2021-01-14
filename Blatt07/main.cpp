/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2021-01-15 | Aufgabenblatt 7 - Aufgabe 1: Punkte im R^d
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <array>
#include "point.cpp"
#include "statistics.hh"

int main(int argc, char **argv)
{
    // a)
    Point<int, 4> p1;
    std::cout << p1.coord(2) << std::endl;
    std::cout << p1.dimension << std::endl;

    // b)
    Point<double, 3> p;
    p.coord(2) = 3.2;
    std::cout << p.coord(2) << std::endl;

    // c)
    Point<double, 3> p3 = {{0.1, 1.2, 2.3}};
    std::cout << p3.norm() << std::endl;

    // d)
    Point<double, 6> p4 = {{0.1, 1.2, 2.3, 3.4, 4.5, 5.6}};
    std::cout << p4[5] << std::endl;
}