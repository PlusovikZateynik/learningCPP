#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int nNumberOfArgs, char* pszArgs[]){
    std::cout << "This program has no errors!\n";

    int nSum = 0;

    for(int nNums = 0;; nNums++) {
        int nValue;
        std::cout << "Enter the next num:\n";
        std::cin >> nValue;
        std::cout << std::endl;

            
        if(nValue < 0) {
            if(nNums == 0) {
            std::cout << "No average.\n";
            break;
            } else {
                std::cout << "The average is equal: " << nSum/nNums << std::endl;
            break;
            }
        }

        nSum += nValue;
    }

    return 0;

}