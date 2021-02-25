#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int nArg, char* pszArgs[]) {
    std::cout << "The program arguments " << pszArgs[0] << " are:\n";

    for(int i = 1; i < nArg; i++) {
        std::cout << i << ": " << pszArgs[i] << "\n";
    } 

    std::cout << nArg << "\n";

    std::cout << "That's all!";

    return 0;
}