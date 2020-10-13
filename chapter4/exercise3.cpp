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

    double sum = 0;

    for (int i = 0; i < temps.size(); i++)
        sum += temps[i];

    sort(temps.begin(), temps.end());

    std::cout << "The sum is equial " << sum << "\n";
    std::cout << "The min is equial " << temps[0] << "\n";
    std::cout << "The max is equial " << temps[temps.size() - 1] << "\n";
    std::cout << "The average is equial " << sum / temps.size() << "\n";
}