#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

std::pair<double, double> minmax(std::vector<double> v){
    if (v.size() == 0){
        cout << "Vector is empty!" << endl;
        return std::pair<double, double> (0, 0);
    }
    std::pair<double, double> minmax(v[0], v[0]);
    for (int i = 0 ; i < v.size() ; i++){
        if (v[i] < minmax.first)
            minmax.first = v[i];
        if (v[i] > minmax.second)
            minmax.second = v[i];
    }
    return minmax;
}

std::vector<double> reversed(const std::vector<double>& v){
    std::vector<double> r(v.size());
    for (int i = 0; i < v.size() ; i++)
        r[i] = v[v.size() - 1 - i];
    return r;
}

void roundelements(std::vector<double> &v){
    if (v.size() == 0){
        cout << "Vector is empty!" << endl;
        return;
    }
    for(int i = 0 ; i < v.size() ; i++)
        v[i] = std::round(v[i]);
}

void referencereverse(std::vector<double> &v){
    if (v.size() == 0){
        cout << "Vector is empty!" << endl;
        return;
    }
    for (int i = 0 ; i <= (v.size() - 1) / 2 ; i++)
        std::swap(v[i], v[v.size() - 1 - i]);
}


int main(int argc, char** argv) {
    std::vector<double> v1;
    std::vector<double> v2(10);
    std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
    for (int i = 0 ; i < v1.size() ; i++)
        cout << v1[i] << " ";
    for (int i = 0 ; i < v2.size() ; i++) 
       cout << v2[i] << " ";
    cout << endl;
    //Die Eintraege ohne ein explizit gegebene Wert haben Wert 0
    for (int i = 0 ; i < v3.size() ; i++)
        cout << v3[i] << " ";
    cout << endl;
    cout << minmax(v3).first << ", " << minmax(v3).second << endl;
    std::vector<double> v4 = reversed(v3);
    for (int i = 0 ; i < v4.size() ; i++) 
       cout << v4[i] << " ";
    cout << endl;
    std::vector<double> v5 = {{3.5, 2.2, 8.0}};
    roundelements(v5);
    for (int i = 0 ; i < v5.size() ; i++) 
       cout << v5[i] << " ";
    cout << endl;
    referencereverse(v3);
    for (int i = 0 ; i < v3.size() ; i++)
        cout << v3[i] << " ";
    cout << endl;
    std::vector<double> v6 = {{1, 2, 3, 4, 5}};
    referencereverse(v1);
    referencereverse(v6);
    for (int i = 0 ; i < v6.size() ; i++)
        cout << v6[i] << " ";
    cout << endl;
}