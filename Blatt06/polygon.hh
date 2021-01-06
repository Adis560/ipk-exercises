/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 1: Flächenberechnung für Polynome
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#ifndef POLYGON_HH
#define POLYGON_HH

class Polygon
{

public:
    Polygon(const std::vector<Point> &corners);
    Polygon(const std::vector<double> &x, const std::vector<double> &y);
    std::size_t corners() const;
    const Point &corner(std::size_t i) const;

private:
    std::vector<Point> _Points;
};
#endif // POLYGON_HH