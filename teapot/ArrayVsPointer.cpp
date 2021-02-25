#include <iostream>

void arrayPointer() {
    char charArray[10];
    char* pArray = charArray;
    for(int i = 0; i < 10; i++) {
        *pArray = '\0';
        *pArray++;
    }
    
}

int main() {
 arrayPointer();
}