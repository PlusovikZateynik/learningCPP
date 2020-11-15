#include <iostream>

double ctok(double c) {
    double k = c + 273.15;
    return k;
}

int main() {
    double c;
    std::cin >> c;
    if(c <= -273.15) std::cout << "Enter more than -273.15 temp.\n" << std::endl;
    else {double k = ctok(c);
    std::cout << k << std::endl;}
}