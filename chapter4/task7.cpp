#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

int main()
{
    std::string temp;
    std::vector<double> numbers;
    int point;

    while (std::cin >> temp)
    {

        if (temp == "|")
        {
            sort(numbers.begin(), numbers.end());
            std::cout << "The min value is " << numbers[0] << "\n";
            std::cout << "The max value is " << numbers[numbers.size() - 1] << "\n";

            double sum = 0;
            for (int i = 0; i < numbers.size(); i++)
            {
                sum += numbers[i];
            }

            std::cout << "The sum is equal " << sum << "\n";
            std::cout << "The number of elements is " << numbers.size() << "\n";
            break;
        }

        std::vector<char> v(temp.begin(), temp.end());
        std::string digit;
        std::string mesure;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= 'a' && v[i] <= 'z')
            {
                mesure.push_back(v[i]);
            }
            else
            {
                digit.push_back(v[i]);
            }
        }

        double getIt = stod(digit);

        if (mesure == "cm")
        {
            numbers.push_back(getIt * 0.01);
        }
        else if (mesure == "in")
        {
            numbers.push_back(getIt * 0.0254);
        }
        else if (mesure == "ft")
        {
            numbers.push_back(getIt * 0.3048);
        }
        else if (mesure == "m")
        {
            numbers.push_back(getIt * 1);
        }
        else
        {
            std::cout << "Such measure is not available.\n";
        }
    }
}
