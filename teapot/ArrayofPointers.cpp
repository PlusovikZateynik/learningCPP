#include <iostream>

void fn() {
    int n;
    int* pInts[3];
    pInts[0] = &n;
    *pInts[0] = 1;

    int n1, n2, n3;
    int* pIntsSecond[3] = {(new int), (new int), (new int)};

    for(int i = 0; i < 3; i++) {
        *pIntsSecond[i] = 0;
    }

    int n4, n5, n6;
    int* pIntsThird[3] = {&n4, &n5, &n6};
    for(int i = 0; i < 3; i++) {
        *pIntsThird[i] = 0;
    }
}

int main() {

    fn();

}