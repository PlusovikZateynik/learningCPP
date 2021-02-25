#include <iostream>

const char *int2month(int nMonth)
{
    if (nMonth < 1 || nMonth > 12)
    {
        return "invalid";
    }

    const char *pszMonths[] = {"Error",
                               "Jan",
                               "Feb",
                               "March",
                               "Apr",
                               "May",
                               "Jun",
                               "Jul",
                               "Aug",
                               "Sep",
                               "Oct",
                               "Nov",
                               "Dec"};
    return pszMonths[nMonth];
}

int main()
{
    std::cout << int2month(2);
}