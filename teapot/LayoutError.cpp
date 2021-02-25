#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int intArgc, char* pszArgs[]) {
    int upper = 0;
    double n = 0.0;
    int lower = 0;

    std::cout << "upper = " << upper << "\n";
    std::cout << "n = " << n << "\n";
    std::cout << "lower = " << lower << "\n";

    std::cout << "\nSaving double into int\n\n";

    int* pD;
    pD = (int*)&n;
    *pD = 13;

    std::cout << "upper = " << upper << "\n";
    std::cout << "n = " << n << "\n";
    std::cout << "lower = " << lower << "\n";

    system("PAUSE");
    return 0;

}