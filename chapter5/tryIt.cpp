#include <iostream>
#include <string>
#include <vector>
#include "std_lib_facilities.h"

int main() {
    try {
        std::string s = "Success!\n";
        for(int i = 0; i <= 6; i++) std::cout << s[i];
        keep_window_open();
        return 0;
    }

    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }

    catch(...) {
        cerr << "Ops! Noname exception!\n";
        keep_window_open();
        return 2;
    }
}