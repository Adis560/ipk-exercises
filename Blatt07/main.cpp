/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2021-01-15 | Aufgabenblatt 7 - Aufgabe 1: Punkte im R^d
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <array>
#include "point.hh"

int main(int argc, char **argv)
{
    Point<int, 4> p;

    std::cout << p.coordinate(2) << std::endl;
    std::cout << p.dimension << std::endl;
}