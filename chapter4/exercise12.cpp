#include <iostream>
#include <vector>

int main()
{

    std::vector<int> v = {1};
    int count = 1;
    int max;

    std::cout << "Enter the max value:\n";
    std::cin >> max;

    for (int i = 2; i <= max; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }
        if (count < 3)
        {
            v.push_back(i);
        }
        count = 1;
    }

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }

    return 0;
}