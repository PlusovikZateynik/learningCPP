#include <iostream>
#include <math.h>

int main() {
    for(int i = 1; i < 65; i++) {
        std::cout << "The value of " << i << " square is equal " <<  1 * pow(2, i - 1) << "\n";
    }
}