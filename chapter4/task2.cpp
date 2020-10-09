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
            sort(numbers.begin(), numbers.end());
            std::cout << "The min of two numbers is equal " << numbers[0] << "\n";
            for(int i = 0; i < numbers.size(); i++) {
                std::cout << numbers[i] << " ";
                }
            numbers.clear();
            std::cout << "\n";
            }
        }
    }

