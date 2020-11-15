#include <iostream>

bool check(double k) {
    if(k <= 0) {std::cout << "Enter more than 0 temp.\n" << std::endl;
    return false;}
    return true;
    } 


void ctok(double k) {
    double c;
    if(check(k)) {c = k - 273.15; std::cout << c;}
    
}

int main() {
    double k;
    std::cin >> k;
    ctok(k);
}