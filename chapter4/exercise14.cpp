#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;
    int max;

    std::cout << "Enter the max value:\n";
    std::cin >> max;

    for (int i = 0; i <= max; i++)
    {
        v.push_back(i);
    }

    for (int i = 2; i * i < v.size(); ++i)
    {
        if (v[i] != 0)
        {
            for (int j = i * i; j < v.size(); j += i)
            {
                v[j] = 0;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            std::cout << v[i] << "\n";
        }
    }

    return 0;
}
