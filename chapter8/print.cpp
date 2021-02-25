#include <string>
#include <vector>
#include <iostream>

void print(std::string, std::vector<int> ivec) {
    for(int i = 0; i < ivec.size(); i++)
    std::cout << ivec[i] << "\n";
}

std::vector<int> fibonacci (int x, int y, std::vector<int> v, int n) {
    v.push_back(x);
    v.push_back(y);
    for(int i = 0; i < n-2; i++) {
        int temp = x + y;
        x = y;
        y = temp;
        v.push_back(temp);
    }

    return v;
}

int main() {

    std::vector<int> v;
    std::string n;

    print(n, fibonacci(1, 2, v, 7));

    return 0;
}