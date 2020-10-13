#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<double> temps;
    double temp;

    while (std::cin >> temp)
    {
        temps.push_back(temp);
    }

    sort(temps.begin(), temps.end());

    int size = temps.size();

    if (size % 2 == 0)
    {
        std::cout << "The median is equal " << (temps[size / 2] + temps[(size - 1) / 2]) / 2.0 << "\n";
    }
    else
    {
        std::cout << "The median is equal " << temps[size / 2] << "\n";
    }
}