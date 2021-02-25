#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int nNumberofArgs, char* pszArgs[]) {
    bool b;
    char c;
    int n;
    long l;
    float f;
    double d;

    std::cout << "sizeof a bool = " << sizeof(b) << std::endl;
    std::cout << "sizeof a char = " << sizeof(c) << std::endl;
    std::cout << "sizeof an int = " << sizeof(n) << std::endl;
    std::cout << "sizeof a long = " << sizeof(l) << std::endl;
    std::cout << "sizeof a float= " << sizeof(f) << std::endl;
    std::cout << "sizeof a double = " << sizeof(d) << std::endl;

    system("PAUSE");
    return 0;
}