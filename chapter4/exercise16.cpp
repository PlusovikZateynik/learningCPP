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
    int digit;

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

        if (currentValue > maxValue)
        {
            maxValue = currentValue;
            digit = v[i];
        }
    }

    std::cout << "The digit " << digit << " is on the vector " << maxValue << " times.";
}
