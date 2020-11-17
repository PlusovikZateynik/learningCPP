#include <iostream>


int main() {

    int n = 1;
    int m = 1;
    int k;
    int i;

    std::cout << n << "\n" << m << "\n";

    for(i = 1; i < 50; i++) {
    k = n + m;
    if(k < 0) break;
    std::cout << k << "\n";
    n = m;
    m = k;
    }

    std::cout << "Iteration: " << i << "\n";

    return 0;
}
