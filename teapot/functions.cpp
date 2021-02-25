#include <iostream>

int fn(int n1){
n1 += 10;
return n1;
}

void parent(void) {
    int n1 = 0;
    n1 = fn(n1);
    std::cout << n1;
}

void fn2(int* pintArg) {
    *pintArg = 10;
}

void parent2() {
    int n = 0;
    fn2(&n);
    std::cout << n;
}

void fn3(int& intArg) {
    intArg = 15;
}

void parent3(void) {
    int n = 0;
    fn3(n);
    std::cout << n;
}

int main() {

    parent();


}