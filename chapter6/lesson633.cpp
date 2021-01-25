#include <iostream>

class Token
{
public:
    char kind;
    double value;

    Token(char ch): kind(ch), value(0) {}

    Token(char ch, double val): kind(ch), value(val) {}

};

int main()
{
    std::cout << "Started!\n";

    Token plusToken('+');

    Token firstNumberToken('8', 3.14);

    std::cout << plusToken.value;


}