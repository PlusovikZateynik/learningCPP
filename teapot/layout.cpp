#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int nNumberofArgs, char* pszArg[]) {

    int end;
    double d;
    int n;
    long l;
    float f;

    std::cout.setf(std::ios::hex);
    std::cout.unsetf(std::ios::dec);

    std::cout << "&end = " << &end << "\n";
    std::cout << "&d = " << &d << "\n";
    std::cout << "&n = " << &n << "\n";
    std::cout << "&l = " << &l << "\n";
    std::cout << "&f = " << &f << "\n";

    int intVar;
    int* pintVar;
    
    pintVar = &intVar;
    *pintVar = 100;

    std::cout << intVar << "\n";
    std::cout << &intVar << "\n";
    std::cout << pintVar << "\n";

    system("PAUSE");
    return 0;

}