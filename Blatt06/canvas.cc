/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 2: Pixelgraphiken
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include "canvas.hh"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels)
    : _center(center), _width(width), _height(height), _horPixels(horPixels), _vertPixels(vertPixels)
{
}

int Canvas::Brightness(int i, int j) const
{
    return _pixels[i][j];
}

void Canvas::setBrightness(int i, int j, int brightness)
{
    _pixels[i][j] = brightness;
}

Point Canvas::coord(int i, int j) const {
    // Position.x = ( width / horPixels ) * i
    // Position.y = ( height / vertPixels ) * j
    double pixelWidth = _width / _horPixels;
    double pixelHeight = _height / _vertPixels;
    double canvasX = _center.x() - _width / 2;
    double canvasY = _center.y() - _height / 2;
    double x = canvasX + i * pixelWidth;
    double y = canvasY + j * pixelHeight;
    return Point(x,y);
}