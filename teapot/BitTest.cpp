#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int nArg, char* pszArgs[]) {
    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout.setf(std::ios::showbase);

    int nArg1 = 0x1234;
    int nArg2 = 0x00ff;

    std::cout << "nArg1          = " << nArg1 << "\n";
    std::cout << "nArg2          = " << nArg2 << "\n";
    std::cout << "~nArg1          = " << ~nArg1 << "\n";
    std::cout << "~nArg2         = " << ~nArg2 << "\n";

    std::cout << "nArg1 & nArg2 = " << (nArg1 & nArg2) << "\n";
    std::cout << "nArg1 | nArg2 = " << (nArg1 | nArg2) << "\n";
    std::cout << "nArg1 ^ nArg2 = " << (nArg1 ^ nArg2) << "\n";

    system("PAUSE");
    return 0;
}