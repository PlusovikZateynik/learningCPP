#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string temp;
    std::vector<int> numbers;
    int stop = 3;

    while(std::cin >> temp) {

        if(temp == "|")
        break;

        numbers.push_back(std::stoi(temp));
        if(numbers.size() == stop) {
            for(int i = 0; i < numbers.size(); i++) {
                std::cout << numbers[i];

                if(i != numbers.size() - 1)
                std::cout << ", ";
            }
            std::cout << "\n";
            numbers.clear();
        }
    }

}
