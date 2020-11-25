/*  pk-exercises:2020-ws-8-g546f313 
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-11-20 | Aufgabenblatt 2 - Aufgabe 1: Mitternachtsformel
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <cmath>

void mFormel(double a, double b, double square)
{
    /*  Berechnen der Mitternachtsformel:
                -b +- sqrt( b^2 - 4ac )
        x1,2 =  -----------------------
                          2a
    */
    // Die Wurzel wurde in einem vorherigen Schritt berechnet.
    double x1 = (-b + square) / 2 * a;
    double x2 = (-b - square) / 2 * a;

    std::cout << "Die Nullstellen liegen in:" << std::endl;
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
};

// Wurzel ziehen
double mSquare(double a, double b, double c)
{
    b = b * b;
    /* Zahl, von der die Wurzel gezogen werden soll */
    double toSquare = b - 4 * a * c;
    if (toSquare >= 0)
    {
        return sqrt(toSquare);
    }
    else
    {
        return -1;
    };
};

int main(int argc, char **argv)
{
    /*  Definieren der Eingabevariablen für die Form ax^2 + bx + c
        Mitternachtsformel:
                -b +- sqrt( b^2 - 4ac )
        x1,2 =  -----------------------
                          2a
    */
    double a;
    double b;
    double c;
    // Bildschirmausgabe: Start
    std::cout << std::endl << "Mitternachtsformel Berechner v" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Das Programm berechnet die Nullstellen für"  << std::endl
              << "eine Gleichung der Form ax^2 + bx + c = 0"   << std::endl << std::endl;
    std::cout << "Bitte geben Sie die Werte für _ ein:"        << std::endl;
    std::cout << "ax^2 + bx + c  >> a = " << std::flush;
    std::cin >> a;
    std::cout << "ax^2 + bx + c  >> b = " << std::flush;
    std::cin >> b;
    std::cout << "ax^2 + bx + c  >> c = " << std::flush;
    std::cin >> c;

    // Schritt 1: Fehler abfangen - Nicht durch 0 teilbar
    if (a == 0 or b == 0)
    {
        std::cout << "Es kann nicht durch 0 geteilt werden. | Das Programm wird beendet" << std::endl;
        return 0;
    }

    // Schritt 2: Wurzel ziehen
    double squareResult = mSquare(a, b, c);

    // Schritt 3: Fehler abfangen - Wurzel ist negativ.
    if (squareResult == -1)
    {
        std::cout << "Die Wurzel konnte nicht gezogen werden. | Das Programm wird beendet" << std::endl;
        return 0;
    }

    // Schritt 4: Ausgabe der Berechnung
    std::cout << std::endl
              << "Die Ausgabe wurde berechnet:" << std::endl;
    mFormel(a, b, squareResult);
}