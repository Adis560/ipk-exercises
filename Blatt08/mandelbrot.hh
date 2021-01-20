/*  ipk-exercises:2020-ws-28-g9481b41
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2021-01-22 | Aufgabenblatt 8 - Die Mandelbrot-Menge
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include "fractals/canvas.hh"

void mandelbrot(Canvas &canvas, double threshold, int maxInt, std::string filename) {}

class IterationResult
{
public:
    // Funktionen
    IterationResult iterate(Point z, Point c, double threshold, int maxIt){};

    // Accessor
    Point point() { return _lastPoint; };
    Point point(Point p) { _lastPoint = p; };
    int it() { return _iter; }
    int it(int i) { _iter = i; }

private:
    Point _lastPoint;
    int _iter;
};
