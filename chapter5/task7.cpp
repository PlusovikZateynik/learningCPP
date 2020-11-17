#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "a*x^2 + b*x + c = 0\n";
    std::cout << "Enter the a value:\n";
    std::cin >> a;
    std::cout << "Enter the b value:\n";
    std::cin >> b;
    std::cout << "Enter the c value:\n";
    std::cin >> c;

    double d = pow(b, 2) - (4 * a * c);

    if (d < 0)
    {
        std::cout << "There is no root.\n";
    }
    else if (d == 0)
    {
        std::cout << "There is one root: " << -b / 2 * a << ".\n";
    }
    else
    {
        std::cout << "There are two roots: " << (-b + sqrt(d)) / 2 * a << " and " << (-b - sqrt(d)) / 2 * a << ".\n";
    }
}