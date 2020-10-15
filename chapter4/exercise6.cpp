#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string number;

    std::cout << "Enter the digit.\n";
    std::cin >> number;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (number == numbers[i])
        {
            std::cout << i;
        }
        else if (number == std::to_string(i))
        {
            std::cout << numbers[i];
        }
    }

    return 0;
}