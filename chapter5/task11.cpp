#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<int> answer = {1, 2, 3, 4};
    std::vector<char> quess;
    std::string number;
    int cow = 0;
    int bull = 0;

    std::cout << "Enter the number:\n";
    std::cin >> number;

    for(int i = 0; i < number.size(); i++) {
        quess.push_back(int(number[i]) - 48);
    }
    

    for(int i = 0; i < answer.size(); i++) {
        for(int k = 0; k < quess.size(); k++) {
             if(answer[i] == quess[k] && i == k) bull += 1;
             if(answer[i] == quess[k] && i != k) cow += 1;
        }
    }

    std::cout << bull << " bull(s) and " << cow << " cow(s).\n"; 

    return 0;
}