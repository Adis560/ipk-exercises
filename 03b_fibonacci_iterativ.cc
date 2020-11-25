/*  pk-exercises:2020-ws-8-g546f313 
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-11-20 | Aufgabenblatt 2 - Aufgabe 4: Fibonacci Iterativ
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <cmath>

void fibonacci_iterativ(int number)
{
    if(number == 0){
        std::cout << "Step 0" << ": 0" << std::endl;
    }
    if(number == 1){
        std::cout << "Step 1" << ": 1" << std::endl;
    }
    // Workaround um die Fälle 0 und 1 auch noch darzustellen.
    if(number > 1){
        std::cout << "Step 0" << ": 0" << std::endl;
        std::cout << "Step 1" << ": 1" << std::endl;
    }
    int iteration = 2;
    double prevSum1 = 1;
    double prevSum2 = 0;
    while(iteration <= number){
        double currSum = prevSum1 + prevSum2;
        prevSum2 = prevSum1;
        prevSum1 = currSum;
        std::cout << "Step " << iteration << ": " << currSum << std::endl;
        iteration++;
    }
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
    fibonacci_iterativ(number);
    return 0;
}