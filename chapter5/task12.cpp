#include <iostream>
#include <vector>
#include <string>
#include "std_lib_facilities.h"

int main() {

    bool gameComtinue = true;
    
    while(gameComtinue == true) {
    
    std::string number;
    vector<char> quess;
    int cow = 0;
    int bull = 0;
    char userMove;

    std::cout << "Enter the number:\n";
    std::cin >> number;

    for(int i = 0; i < number.size(); i++) {
        quess.push_back(int(number[i]) - 48);
    }
    
    srand(int(number[0]));

    vector<int> answer = {randint(10), randint(10), randint(10), randint(10)};


    for(int i = 0; i < answer.size(); i++) {
        for(int k = 0; k < quess.size(); k++) {
             if(answer[i] == quess[k] && i == k) bull += 1;
             if(answer[i] == quess[k] && i != k) cow += 1;
        }
    }

    std::cout << bull << " bull(s) and " << cow << " cow(s).\n"; 
    std::cout << "Continue?(y/n)\n";
    std::cin >> userMove;

    if(userMove == 'y') gameComtinue = true;
    else gameComtinue = false;
    }

    return 0;
}