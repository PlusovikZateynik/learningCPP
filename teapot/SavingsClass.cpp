#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "savings.h"

float Savings::deposit(float amount) {
    balance += amount;
    return balance;
}

int main(int nNumberofArgs, char* pszArgs[]) {
    Savings s;
    s.accountNumber = 123456;
    s.balance = 0.0;

    std::cout << "Put on the account 10 coins " << s.accountNumber << std::endl;
    s.deposit(10);
    std::cout << "State of an account " << s.balance << std::endl;

    return 0;
}