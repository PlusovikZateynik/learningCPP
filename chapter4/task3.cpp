#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::string temp;
    std::vector<int> numbers;

    while(std::cin >> temp) {

        if(temp == "|")
        break;

        numbers.push_back(std::stoi(temp));
        sort(numbers.begin(), numbers.end());

        }

        for(int i = 1; i < numbers.size(); i++) {
            if(numbers[i] == numbers[i - 1]) {
                std::cout << numbers[i] << " ";
            }
        }
    }


