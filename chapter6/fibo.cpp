#include <iostream>

void fibo(int first, int second, int n){

    int k = first + second;
    if(first == 1 && second == 1) {
    std::cout << first << "\n";
    std::cout << second << "\n";
    }
    std:: cout << k << "\n";

    first = second;
    second = k;

    if(k + first <= n) fibo(first, second, n);
}

int main() {

fibo(1, 1, 89);

}

//1 1 2 3 5 8 13 21 34 55