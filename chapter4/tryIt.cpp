#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words;
    std::string temp;
    std::string dislikedFirst = "new";
    std::string dislikedSecond = "few";
    std::string dislikedThird = "mew";

    while(std::cin>>temp)
        words.push_back(temp);
    std::cout << "The number of words is " << words.size() << std::endl;

        for(int i = 0; i < words.size(); ++i) {
            if(words[i] == dislikedFirst || words[i] == dislikedSecond || words[i] == dislikedThird)
                words[i] = "BLEEP";
            std::cout << words[i] << "\n";
        }

}