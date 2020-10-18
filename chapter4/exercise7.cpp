#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string firstDigit;
    std::string secondDigit;
    int firstNumber;
    int secondNumber;
    std::string operation;
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> numbersTwo = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    std::cout << "Enter the first digit:\n";
    std::cin >> firstDigit;
    std::cout << "Enter the second digit:\n";
    std::cin >> secondDigit;
    std::cout << "Enter the operation:\n";
    std::cin >> operation;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (firstDigit == numbers[i])
        {
            firstNumber = i;
        }
        else if (firstDigit == numbersTwo[i])
        {
            firstNumber = i;
        }
        if (secondDigit == numbers[i])
        {
            secondNumber = i;
        }
        else if (secondDigit == numbersTwo[i])
        {
            secondNumber = i;
        }
    }

    if (operation == "+")
    {
        std::cout << "The sum of " << firstDigit << " and " << secondDigit << " is equal " << firstNumber + secondNumber << "\n";
    }
    else if (operation == "-")
    {
        std::cout << "The minus of " << firstDigit << " and " << secondDigit << " is equal " << firstNumber - secondNumber << "\n";
    }
    else if (operation == "*")
    {
        std::cout << "The mult of " << firstDigit << " and " << secondDigit << " is equal " << firstNumber * secondNumber << "\n";
    }
    else if (operation == "/")
    {
        std::cout << "The div of " << firstDigit << " and " << secondDigit << " is equal " << firstNumber / secondNumber << "\n";
    }
    else if (operation == "%")
    {
        std::cout << "The res of " << firstDigit << " and " << secondDigit << " is equal " << firstNumber % secondNumber << "\n";
    }
}
