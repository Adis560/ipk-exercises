/* ipk-exercises:2020-ws-15-g4156485
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 5 - Aufgabe 1: Statistiken
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include "io.hh"

int main(int argc, char **args)
{
    auto readVector = read_vector();
    for (auto vector : readVector)
    {
        std::cout << vector << " ";
    }
}
