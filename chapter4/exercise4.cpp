#include <iostream>
#include <string>

int main()
{
    int questions = 7;
    bool answer = true;
    int bottom = 0;
    int top = 100;
    int value = 50;

    std::cout << "Quess the digit\n";

    while (questions--)
    {
        std::cout << "is that number more than " << value << "?\n(1-yes, 0-no)";
        std::cin >> answer;
        if (answer)
        {
            bottom = value;
            value = bottom + (top - bottom) / 2;
        }
        else
        {
            top = value;
            value = bottom + (top - bottom) / 2;
        }

        if (top - bottom == 1)
        {
            value = bottom + 1;
            break;
        }
    }
    std::cout << "Your number is " << value << "\n";
    system("PAUSE");
    return 0;
}