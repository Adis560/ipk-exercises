/* ipk-exercises:2020-ws-15-g4156485
    Uni-Heidelberg - Programmierkurs (IPK) WS20/21
    Abgabe: 2020-12-11 | Aufgabenblatt 5 - Aufgabe 3: Häufigkeit von Buchstaben
    Alexandru Stefan Iov, Adis Klopic, Johannes Kolbe
*/

#include <iostream>
#include <string>
#include <map>
#include <cctype>

std::map<char,int> get_frequencies(){
    std::map<char, int> f;
    while (true){
        unsigned char c;
        std::cin >> c;
        if (not std::cin)
        break;
        if(std::isalpha(c)){
            if(f.find(char(std::toupper(c))) == f.end()){
                f.insert({char(std::toupper(c)), 1});
            }
            else{
                f[char(std::toupper(c))]++;
            }
        }
    }
    return f;
}

void print_frequencies(const std::map<char,int>& frequencies){
    int sum = 0;
    for (const auto& kv : frequencies) sum += kv.second;
    for (const auto& kv : frequencies)
        std::cout << kv.first << " : " << static_cast<double>(kv.second) / sum << std::endl;
    std::cout << "Total number of letters counted: " << sum << std::endl;
}

int main(){
    std::map<char, int> m;
    m = get_frequencies();
    print_frequencies(m);
}
