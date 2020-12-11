/* ipk-exercises:2020-ws-15-g4156485
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 5 - Aufgabe 1: Statistiken
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include "io.hh"


// a
int main(int argc, char **args)
{
    std::cout << "Normal Distribution: \n      \
    Bitte geben Sie den Seed, N, Avg, und Std Dev Wert ein: "
              << std::endl;
    std::string seed;
    int n;
    double avg;
    double std_dev;

    std::cout << "Seed: ";
    std::getline(std::cin, seed);
    int gen_seed = seed.empty() ? random_seed() : std::stoi(seed);

    std::cout << "N: ";
    std::cin >> n;
    std::cout << "Avg: ";
    std::cin >> avg;
    std::cout << "Std Dev: ";
    std::cin >> std_dev;


    auto dist = normal_distribution(gen_seed, n, avg, std_dev);
    for (auto vector : dist)
    {
        std::cout << vector << " ";
    }
}
