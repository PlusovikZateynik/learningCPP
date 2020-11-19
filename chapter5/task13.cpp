#include <iostream>
#include <vector>
#include <string>

int sumDay(std::vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    return sum;
}

int main()
{
    std::vector<int> mon;
    std::vector<int> tue;
    std::vector<int> wed;
    std::vector<int> thu;
    std::vector<int> fri;
    std::vector<int> sat;
    std::vector<int> sun;
    std::vector<std::string> resetDays;

    int k = 0;
    std::string day;
    bool continueFlag = true;
    char continueAnswer;
    std::string number;
    int sum = 0;

    while (continueFlag)
    {

        std::cout << "Enter the day:\n";
        std::cin >> day;

        std::cout << "Enter the number:\n";
        std::cin >> number;

        for (int i = 0; i < number.size(); i++)
        {
            if (isdigit(number[i]) == false)
                k += 1;
        }

        if (k > 0)
        {
            resetDays.push_back(number);
        }
        else
        {

            if (day == "Monday" || day == "mon" || day == "monday" || day == "Mon")
            {
                mon.push_back(std::stoi(number));
            }
            else if (day == "Tuesday" || day == "tue" || day == "tuesday" || day == "Tue")
            {
                tue.push_back(std::stoi(number));
            }
            else if (day == "Wednesday" || day == "wed" || day == "wednesday" || day == "wed")
            {
                wed.push_back(std::stoi(number));
            }
            else if (day == "Thursday" || day == "thu" || day == "thursday" || day == "Thu")
            {
                thu.push_back(std::stoi(number));
            }
            else if (day == "Friday" || day == "fri" || day == "friday" || day == "Fri")
            {
                fri.push_back(std::stoi(number));
            }
            else if (day == "Saturday" || day == "sat" || day == "saturday" || day == "Sat")
            {
                sat.push_back(std::stoi(number));
            }
            else if (day == "Sunday" || day == "sun" || day == "sunday" || day == "Sun")
            {
                sun.push_back(std::stoi(number));
            }
            else
                resetDays.push_back(number);
        }

        k = 0;

        std::cout << "Continue?(y/n)\n";
        std::cin >> continueAnswer;

        if (continueAnswer == 'y')
            continueFlag = true;
        else
            continueFlag = false;
    }

    std::cout << "The sum values of Monday is " << sumDay(mon) << ".\n";

    std::cout << "The sum values of Tuesday is " << sumDay(tue) << ".\n";

    std::cout << "The sum values of Wednesday is " << sumDay(wed) << ".\n";

    std::cout << "The sum values of Thursday is " << sumDay(thu) << ".\n";

    std::cout << "The sum values of Friday is " << sumDay(fri) << ".\n";

    std::cout << "The sum values of Saturday is " << sumDay(sat) << ".\n";

    std::cout << "The sum values of Sunday is " << sumDay(sun) << ".\n";

    for (int i = 0; i < resetDays.size(); i++)
    {
        sum += 1;
    }

    std::cout << "The value of reset days is " << sum << ".\n";

    return 0;
}