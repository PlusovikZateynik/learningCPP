#include <iostream>

class Point
{
public:
    double x;
    double y;

private:
    int color;
};

int main()
{
    Point p;
    p.x = 1.2;
    p.y = 8.01;

    std::cout << p.x << " " << p.y;
}