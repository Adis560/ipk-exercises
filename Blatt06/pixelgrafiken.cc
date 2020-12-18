/*  ipk-exercises:2020-ws-20-ge591757
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 6 - Aufgabe 2: Pixelgraphiken
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include<iostream>
#include "canvas.hh"


int main(int argc, char** args){
    Point center = Point(30, 30);
    int vPixels = 40;
    int hPixels = 40;
    int width = 400;
    int height = 200;

    Canvas board = Canvas(center, width, height, hPixels, vPixels);
    
    Point LU = board.coord(0,0);
    Point RU = board.coord(hPixels-1,0);
    Point LO = board.coord(0,vPixels-1);
    Point RO = board.coord(hPixels-1,vPixels-1);

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