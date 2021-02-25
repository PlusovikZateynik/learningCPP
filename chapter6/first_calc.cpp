#include "std_lib_facilities.h"
#include <iostream>
int main() {
    std::cout << "Please, enter the term (+ and - allowed):";
    int lval = 0;
    int rval;
    char op;
    std::cin>>lval;

    if(!std::cin) error("no such operand\n");
    while(std::cin>>op) {
        std::cin>>rval;
        //if(!std::cin) error("no second operand\n");
        switch(op) {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                std::cout<<"Result: " << lval << '\n';
                return 0;
        }
    }

    error("wrong term\n");
    
}