/*  ipk-exercises:2020-ws-13-gded92eb
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-11-27 | Aufgabenblatt 3 - Aufgabe 2:
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

// Aufgabe 2: Positive Potenzen von ganzen Zahlen

#include <iostream>

namespace power {
    int iterative(int q, int n) {
        if (n < 0) {
            std::cout << "Invalid input.";
            return 0;
        }
        int pow = 1;
        for (int i = 0; i < n; i++)
            pow *= q;
        return pow;
    }

    int recursive(int q, int n) {
        if (n < 0) {
            std::cout << "Invalid input.";
            return 0;
        }
        if (n != 0)
            return (q * recursive(q, n - 1));
        else
            return 1;
    }

    int betterPower(int q, int n) {
        if (n < 0) {
            std::cout << "Invalid input. ";
            return 0;
        }
        int temp;
        if (n == 0)
            return 1;
        temp = betterPower(q, n / 2);
        if (n % 2 == 0)
            return temp * temp;
        else
            return q * temp * temp;
    }
}

int main(int argc, char** argv) {
    int q, n;
    std::cout << "q = ";
    std::cin >> q;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "Iterative power: " << power::iterative(q, n) << std::endl;
    std::cout << "Recursive power: " << power::recursive(q, n) << std::endl;
    std::cout << "Faster solution power: " << power::betterPower(q, n) << std::endl;
    return 0;
}
