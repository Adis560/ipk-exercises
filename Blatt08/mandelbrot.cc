/*  ipk-exercises:2020-ws-28-g9481b41
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2021-01-22 | Aufgabenblatt 8 - Die Mandelbrot-Menge
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <math.h>
#include "mandelbrot.hh"

// void mandelbrot(Canvas &canvas, double threshold, int maxInt, std::string filename)
// {
// }

double distance(Point a, Point b)
{
    return sqrt((b.x() - a.x()) * (b.x() - a.x()) + (b.y() - a.y()) * (b.y() - a.y()));
}

IterationResult iterate(Point z, Point c, double threshold, int maxIt)
{
    // c ist Ausgangspunkt
    // z ist Anfang, wird berechnet
    // Solange z im threshold (radius, double) von z ist,
    // wird weitergemacht

    int i = 0;
    while (i <= maxIt or distance(c, z) <= threshold)
    {
        // z ist der zu berechnende Punkt.
        double zx = z.x() * z.x() - z.y() * z.y() + c.x();
        double zy = 2 * z.x() * z.y() + c.y();
        z = Point(zx, zy);
        i++;
    }
    return IterationResult(z, i);
};
