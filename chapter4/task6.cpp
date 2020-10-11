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

        sort(numbers.begin(), numbers.end());

        double min = numbers[0];
        double max = numbers[numbers.size() - 1];

        if (stod(temp) == min)
        {
            std::cout << "The min around eurly taped.\n";
        }
        else if (stod(temp) == max)
        {
            std::cout << "The max around eurly taped.\n";
        }
    }
}
