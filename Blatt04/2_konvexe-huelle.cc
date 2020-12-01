/*  ipk-exercises:2020-ws-14-gda94e42
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-04 | Aufgabenblatt 4 - Aufgabe 2: Konvexe Hülle
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

// a: read filename
std::vector<std::array<double, 2>> read_points_from_file(std::string filename)
{
    // prepare io-files
    std::array<double, 2> pointsArray;
    std::vector<std::array<double, 2>> returnVector;

    std::ifstream inputFile(filename);
    int counter = 0;
    while (inputFile >> pointsArray[0] >> pointsArray[1])
    {
        returnVector[counter] = pointsArray;
        counter++;
    }
    return returnVector;
}

int main(int argc, char **argv)
{
    read_points_from_file("../blatt04-daten/convex-hull-points.txt");
    return 0;
}