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
            if(f.find(std::toupper(c)) == f.end()){
                f[c]++;
            }
            else{
                f.insert({std::toupper(c), 1});
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
