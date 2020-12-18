/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 1: Flächenberechnung für Polynome
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include "point.hh"

Point::Point() 
    : _x(0), _y(0) 
{}

Point::Point(double x, double y)
    : _x(x), _y(y)
{} 

double Point::x() const {
    return _x;
}

double Point::y() const {
    return _y;
}