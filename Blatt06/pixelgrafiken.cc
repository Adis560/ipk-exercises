/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 2: Pixelgraphiken
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <algorithm>
#include <math.h>
#include "canvas.hh"

int main(int argc, char **args)
{
    Point center = Point(0, 0);
    int vPixels = 3000;
    int hPixels = 4000;
    int width = 4;
    int height = 3;

    Canvas board = Canvas(center, width, height, hPixels, vPixels);

    for (int x = 0; x < 100; x++)
    {
        for (int y = 0; y < 100; y++)
        {
            double sin_x = sin(pow(x, -1));
            double sin_y = sin(pow(y, -1));
            int grauwert = 100 * (sin_x * sin_y + 1);
            int maxValue = std::max(0, grauwert);
            //std::cout << "x: " << x << " y: " << y \
            << " sin x: " << sin_x << " sin y: " << sin_y \
            << " | GW: " << grauwert << std::endl;
            //board.setBrightness(x, y, maxValue);
        }
    }

    Point LU = board.coord(0, 0);
    Point RU = board.coord(hPixels - 1, 0);
    Point LO = board.coord(0, vPixels - 1);
    Point RO = board.coord(hPixels - 1, vPixels - 1);

    std::cout << "Board Dimensionen: " << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Center x: " << center.x() << ", y: " << center.y() << std::endl;
    std::cout << "vPixels: " << vPixels << std::endl;
    std::cout << "hPixels: " << hPixels << std::endl;
    std::cout << "width: " << width << std::endl;
    std::cout << "height: " << height << std::endl;
    std::cout << std::endl;

    std::cout << "Point LU  x: " << LU.x() << " | y: " << LU.y() << std::endl;
    std::cout << "Point RU  x: " << RU.x() << " | y: " << RU.y() << std::endl;
    std::cout << "Point LO  x: " << LO.x() << " | y: " << LO.y() << std::endl;
    std::cout << "Point RO  x: " << RO.x() << " | y: " << RO.y() << std::endl;

}