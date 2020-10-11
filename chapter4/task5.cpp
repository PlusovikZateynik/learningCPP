#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::string temp;
    std::vector<double> numbers;

    while (std::cin >> temp)
    {

        if (temp == "|")
            break;

        numbers.push_back(std::stod(temp));

        if (numbers.size() == 2)
        {
            sort(numbers.begin(), numbers.end());

            if (numbers[1] - numbers[0] < 0.1)
            {
                std::cout << numbers[0] << " " << numbers[1] << "\n";
            }
            else 
            {
                std::cout << "The difference is too big!" << "\n";
            }

            numbers.clear();
        }
    }
}