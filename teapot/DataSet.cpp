#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>

class NameDataSet {
    public:
        char firstName[128];
        char lastName[128];
        int creditCard;
};

bool getData(NameDataSet& nds);
void displayData(NameDataSet& nds);

int main(int nNumberofArgs, char* pszArgs[]) {
    const int MAX = 25;
    NameDataSet nds[MAX];

    std::cout << "Enter 'exit' for stop.\n";
    int index = 0;

    while(getData(nds[index]) && index < MAX) {
        index++;
    }

    std::cout << "\nNotes:\n" << std::endl;
    for(int i = 0; i < index; i++) {
        displayData(nds[i]);
    }

    return 0;
}

bool getData(NameDataSet& nds) {
    std::cout << "\nEnter the first name:\n";
    std::cin >> nds.firstName;

    if(stricmp(nds.firstName, "exit") == 0) return false;

    std::cout << "\nEnter the last name:\n";
    std::cin >> nds.lastName;

    std::cout << "\nEnter the card number:\n";
    std::cin >> nds.creditCard;

    return true;
}

void displayData(NameDataSet& nds) {
    std::cout << nds.firstName << " "
                << nds.lastName << " "
                << nds.creditCard << std::endl;

}