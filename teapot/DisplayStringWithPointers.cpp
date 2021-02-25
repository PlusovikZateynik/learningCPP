#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int nNumberofArgs, char *pszArgs[])
{
    int a;
    int n;
    int m;
    const char *szString = "Randy";

    std::cout << "The array '" << szString << "'" << std::endl;

    std::cout << "Enter the stroke like an array: ";
    for (int i = 0; i < 150; i++)
    {
        std::cout << szString[i];
    }

    std::cout << std::endl;

    std::cout << "Enter the stroke with help of pointer: ";
    const char *pszString = szString;
    while (*pszString)
    {
        std::cout << *pszString;
        pszString++;
    }

    std::cout << std::endl;


    std::cout << &a << std::endl;
    std::cout << &n << std::endl;
    std::cout << &m << std::endl;
    std::cout << "Size of const char: " << sizeof(szString[2]) << std::endl;
    std::cout << &szString << std::endl;
    std::cout << &*pszString + 1 << std::endl;

    return 0;
}