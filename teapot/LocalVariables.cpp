#include <iostream>

double* child() {
    double* dLocalVariable = new double;
    return dLocalVariable;

    delete dLocalVariable;
    dLocalVariable = 0;
}

void parent() {
    double* pdLocal;
    pdLocal = child();
    *pdLocal = 1.0;

    std::cout << *pdLocal;
}

int main() {

    parent();

}