#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int temp;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> temp;
        v.push_back(temp);
    }

    int maxValue = 0;
    int digitMode;
    int digitMax = v[0];
    int digitMin = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        int currentValue = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                currentValue += 1;
            }
        }

        if (v[i] > digitMax)
        {
            digitMax = v[i];
        }
        if (v[i] < digitMin)
        {
            digitMin = v[i];
        }

        if (currentValue > maxValue)
        {
            digitMode = v[i];
            maxValue = currentValue;
        }
    }

    std::cout << "The digit " << digitMode << " is on the vector " << maxValue << " times.\n";
    std::cout << "The max value is equal " << digitMax << ".\n";
    std::cout << "The min value is equal " << digitMin << ".\n";
}
