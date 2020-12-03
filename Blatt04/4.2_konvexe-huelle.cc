/*  ipk-exercises:2020-ws-14-gda94e42
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-04 | Aufgabenblatt 4 - Aufgabe 2: Konvexe Hülle
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <algorithm>
#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <queue>
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

bool sort_by_y(std::array<double, 2> a, std::array<double, 2> b)
{
    return (a[1] < b[1]) ? true 
            : (a[1] == b[1]) ? true 
            : false;
}

bool sort_by_angle(std::array<double, 2> a, std::array<double, 2> b)
{
    return (a[0] * b[1] - a[1] * b[0] > 0) ? true 
            : (a[0] * b[1] - a[1] * b[0] == 0 and 
                std::abs(a[0]) > std::abs(b[0])) ? true 
            : false;
}

// b: konvexe hülle von punkten - graham scan
void convex_hull(std::vector<std::array<double, 2>> &points)
{
    std::sort(points.begin(), points.end(), sort_by_y);
    for(int i = 1; i <= points.size(); i++){
        points[i][0] -= points[0][0];
        points[i][1] -= points[0][1];
    }
    std::sort(points.begin()+1, points.end(), sort_by_angle);
    for(int i = 1; i <= points.size(); i++){
        points[i][0] += points[0][0];
        points[i][1] += points[0][1];
    }
}

bool graham_scan_relation(std::vector<std::array<double, 2>> &points)
{
    std::array<double, 2> a = points[0];
    std::array<double, 2> b = points[1];
    std::array<double, 2> c = points[2];

    int relation = (b[0] - a[0]) * (c[1] - a[1]) - (c[0] - a[0]) * (b[1] - a[1]);
    // left = true
    // right = false
    return relation < 0 ? false :
            relation > 0 ? true :
            false;
}

std::vector<std::array<double, 2>> graham_scan_algorithm(std::vector<std::array<double, 2>> &points)
{
    std::queue<std::array<double, 2>> stack;
    stack.push(points[0]);
    stack.push(points[1]);
    for(int i = 2; i <= points.size(); i++){
        if(graham_scan_algorithm(stack[0], stack[1], points[i])){
            
        }
    }
}

void output_points(std::vector<std::array<double, 2>> &points)
{
    for(int i = 0; i <= points.size(); i++){
        std::cout << points[i][0] << " " << points[i][1] << std::endl;
    }
}

int main(int argc, char** argv)
{
    std::vector<std::array<double, 2>> file = read_points_from_file("convex-hull-points.txt");
    convex_hull(file);
    output_points(file);
    
    return 0;
}