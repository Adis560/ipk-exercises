/*  pk-exercises:2020-ws-8-g546f313 
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-11-20 | Aufgabenblatt 2 - Aufgabe 3: Fibonacci
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <cmath>

int fibonacci(int number)
{
    if(number == 0){
        return 0;
    }
    if(number == 1){
        return 1;
    }
    // Wenn number > 1, dann rekursiver Aufruf mit (number-1), und (number-2)
    return fibonacci(number - 1) + fibonacci(number - 2);
};

int main(int argc, char **argv)
{
    int number;
    // Bildschirmausgabe: Start
    std::cout << std::endl
              << "Fibonacci Berechner" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Bitte zu berechnende Fibonacci Folge eingeben: "     << std::flush;
    std::cin >> number;

    if(number < 0){
        std::cout << "Eingabe ungültig. Wert muss >= 0 sein.";
        return 0;
    }
    int i=0;
    while(i <= number){
        std::cout << fibonacci(i) << " ";
        i++;
    }
    return 0;
}