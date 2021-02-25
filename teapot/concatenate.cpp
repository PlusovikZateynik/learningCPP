#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>

void stringEmUp(char* szTarget, 
                char* szSource1,
                char* szSource2);

int main(int nNumberofArgs, char* pszArgs[]) {
    std::cout << "Concatenation two strings with enter \" - \"\n" << "(In this version there are errors.)" << std::endl;
    char szStrBuffer[256];

    char szString1[] = "This is a string";
    char szString2[] = "THIS IS A STRING";

    stringEmUp(szStrBuffer,
                szString1,
                szString2);

    std::cout << "<" << szStrBuffer << ">" << std::endl;

    return 0;
}

void stringEmUp(char* szTarget,
                char* szSource1,
                char* szSource2
                ){
                    strcpy(szTarget, szSource1);
                    strcat(szTarget, " - ");
                    strcat(szTarget, szSource2);
                }