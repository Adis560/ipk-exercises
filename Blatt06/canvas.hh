/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 2: Pixelgraphiken
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include<vector>
#include "point.hh"

#ifndef CANVAS_HH
#define CANVAS_HH

class Canvas {
    std::vector<std::vector<int>> _pixels;
    Point _center;
    double _width, _height;
    int _horPixels, _vertPixels;

    public:
        Canvas(const Point& center, double width, double height, int horPixels, int vertPixels);

        int Brightness(int i, int j) const;
        void setBrightness(int i, int j, int brightness);
        Point coord(int i, int j) const;
};

#endif // CANVAS_HH