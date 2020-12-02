/*  ipk-exercises:2020-ws-14-gda94e42
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-04 | Aufgabenblatt 4 - Aufgabe 2: Konvexe Hülle
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// a: read filename
std::vector<std::array<double, 2>> read_points_from_file(std::string filename)
{
    std::ifstream inputFile(filename);
    std::array<double, 2> dot;
    std::vector<std::array<double, 2>> collection;
    while (inputFile >> dot[0] >> dot[1])
    {
        collection.push_back(dot);
    }
    return collection;
}


int main(int argc, char** argv)
{
    read_points_from_file("../blatt04-daten/convex-hull-points.txt");
    return 0;
}