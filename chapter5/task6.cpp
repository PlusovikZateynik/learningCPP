#include <iostream>

double convertToFar(double c)
{
    return 9.0 / 5 * c + 32;
}

double convertToCel(double f)
{
    double res = 9.0 / 5;
    return (f - 32) / res;
}

int main()
{
    char measure;
    double c;
    double f;
    std::cout << "c/f?\n";
    std::cin >> measure;
    if (measure != 'c' || measure != 'f')
    {
        std::cout << "Not correct symbol.\n";
        exit;
    }
    std::cout << "Enter the measure:\n";
    if (measure == 'c')
    {
        std::cin >> c;
        std::cout << "The temp in Far is equal " << convertToFar(c) << ".\n";
    }
    else
    {
        std::cin >> f;
        std::cout << "The temp in Cel is equal " << convertToCel(f) << ".\n";
    }
}
