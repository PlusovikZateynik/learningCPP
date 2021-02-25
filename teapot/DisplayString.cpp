#include <cstdio>
#include <cstdlib>
#include <iostream>

void displayString(char stringArray[]);

int main(int nArg, char* pszArgs[]) {
    char charMyName[] = {'S', 't', 'e', 'w', 0};
    displayString(charMyName);
    std::cout << std::endl;

    system("PAUSE");
    return 0;
}

void displayString(char stringArray[]){
    for(int i = 0; stringArray[i] != 0; i++) std::cout << stringArray[i];
}