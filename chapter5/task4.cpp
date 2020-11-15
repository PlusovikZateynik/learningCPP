#include <iostream>

bool check(double c) {
    if(c <= -273.15) {std::cout << "Enter more than -273.15 temp.\n" << std::endl;
    return false;}
    return true;
    } 


void ctok(double c) {
    double k;
    if(check(c)) {k = c + 273.15; std::cout << k;}
    
}

int main() {
    double c;
    std::cin >> c;
    ctok(c);
}