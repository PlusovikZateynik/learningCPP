#include <iostream>
#include <string>

int main()
{
    double firstDigit;
    double secondDigit;
    std::string operation;

    std::cout << "Enter the first digit:\n";
    std::cin >> firstDigit;
    std::cout << "Enter the second digit:\n";
    std::cin >> secondDigit;
    std::cout << "Enter the operation:\n";
    std::cin >> operation;

    if (operation == "+")
    {
        std::cout << "The sum of " << firstDigit << " and " << secondDigit << " is equal " << firstDigit + secondDigit << "\n";
    }
    else if (operation == "-")
    {
        std::cout << "The minus of " << firstDigit << " and " << secondDigit << " is equal " << firstDigit - secondDigit << "\n";
    }
    else if (operation == "*")
    {
        std::cout << "The mult of " << firstDigit << " and " << secondDigit << " is equal " << firstDigit * secondDigit << "\n";
    }
    else if (operation == "/")
    {
        std::cout << "The div of " << firstDigit << " and " << secondDigit << " is equal " << firstDigit / secondDigit << "\n";
    }
    else if (operation == "%")
    {
        std::cout << "The res of " << firstDigit << " and " << secondDigit << " is equal " << int(firstDigit) % int(secondDigit) << "\n";
    }
}
