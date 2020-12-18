/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 1: Flächenberechnung für Polynome
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#ifndef POINT_HH
#define POINT_HH

class Point {
    double _x;
    double _y;

    public:
        Point();
        Point(double x, double y);

        double x() const;
        double y() const;
};

#endif // POINT_HH