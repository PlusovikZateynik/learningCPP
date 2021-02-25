#include <iostream>

void displayArray(int intArray[], int nSize) {
    std::cout << "The values of array elemetns is equal:\n";

    int* pArray = intArray;
    for(int n = 0; n < nSize; n++, pArray++) {
        std::cout << n << ": " << *pArray << "\n";
    }
}

int main() {

    int newArray[4] = {1, 2, 3, 4};

    displayArray(newArray, 5);


    return 0;

}