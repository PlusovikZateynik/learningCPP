#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::string temp;
    std::vector<int> numbers;
    int stop = 2;

    while(std::cin >> temp) {

        if(temp == "|")
        break;

        numbers.push_back(std::stoi(temp));

        if(numbers.size() == stop) {
            for(int i = 0; i < numbers.size(); i++) {
                int digit = numbers[i];
                }
            numbers.clear();
            std::cout << "\n";
            }
        }
    }

