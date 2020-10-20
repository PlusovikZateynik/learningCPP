#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;
    std::vector<int> m;
    int n;
    int max;

    std::cout << "Enter the n value:\n";
    std::cin >> n;
    std::cout << "Enter the max value:\n";
    std::cin >> max;
    std::cout << "\n";

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

    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            m.push_back(v[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << m[i] << "\n";
    }

    return 0;
}
