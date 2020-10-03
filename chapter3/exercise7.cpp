#include <iostream>
#include <string.h>

/*int max_value(int val1, int val2, int val3) {
    int a[3] = {val1, val2, val3}; 
    for(int i = 0; i < sizeof(a) - 1; i++) {
        for(int j = sizeof(a) - 1; j > i; j--) {
            if(a[j - 1] > a[j]) {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    std::cout << a[0];

    return 0;

}*/

std::string alphabet(std::string firstLine, std::string secondLine, std::string thirdLine) {
    std::string a[3] = {firstLine, secondLine, thirdLine};
    for(int i = 0; i < 3; i++) {
        for(int j = 2; j > i; j--) {
            if(a[j-1][0] > a[j][0]) {
                std::string temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    std::cout << a[0] << " " <<  a[1] << " " << a[2];

    return "";
}


int main(){

std::string firstLine;
std::string secondLine;
std::string thirdLine;

std::cin >> firstLine >> secondLine >> thirdLine;

alphabet(firstLine, secondLine, thirdLine);


    return 0;
}

