/*  pk-exercises:2020-ws-8-g546f313 
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-11-20 | Aufgabenblatt 2 - Aufgabe 2: Collatz
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <cmath>

void collatz(int number)
{
    // 2.1 Gib number auf dem Bildschirm aus
    std::cout << number << std::endl;

    // Wiederhole diese Schritte, bis einer der folgenden Zahlenwerte erreicht wird: 1, 0, −1, −5, −17.
    while (number != 1 and number != 0 and number != -1 and number != -5 and number != -17)
    {
        bool gerade = number % 2 == 0;
        // Falls number gerade ist, teile die Zahl durch 2
        if (gerade)
        {
            number = number / 2;
        }
        // Andernfalls multipliziere die Zahl mit 3 und addiere 1.
        else
        {
            number = number * 3 + 1;
        }
        std::cout << number << std::endl;
    }
    // Gib abschließend dieses Ergebnis aus
    std::cout << "Abschließendes Ergebnis: " << number << std::endl;
};

int main(int argc, char **argv)
{
    int number;
    // Bildschirmausgabe: Start
    std::cout << std::endl
              << "Collatz Berechner" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Bitte Anfangswert eingeben: " << std::flush;
    std::cin >> number;

    collatz(number);
}