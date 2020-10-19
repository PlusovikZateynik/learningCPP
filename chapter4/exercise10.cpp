#include <iostream>
#include <vector>
#include <string>
#include <random>

int main()
{
    std::vector<std::string> gameCombinations = {"rock", "paper", "scissors"};
    std::string gamerMove;
    std::string computerMove;
    int gamerNumber;
    bool gamerProcess = 1;

    while (gamerProcess)
    {
        std::cout << "Enter the move(1 - rock, 2 - paper, 3 - scissors)\n";
        std::cin >> gamerNumber;
        if (gamerNumber == 1 || gamerNumber == 2 || gamerNumber == 3)
        {

            switch (gamerNumber)
            {
            case 1:
                gamerMove = "rock";
                break;
            case 2:
                gamerMove = "paper";
                break;
            case 3:
                gamerMove = "scissors";
                break;
            }

            int new_number = std::rand() % 3;

            computerMove = gameCombinations[new_number];

            if (gamerMove == "scissors" && computerMove == "rock" || gamerMove == "paper" && computerMove == "scissors" || gamerMove == "rock" && computerMove == "paper")
            {
                std::cout << "COMPUTER VICTORY!!!\n";
            }
            else if (gamerMove == "scissors" && computerMove == "paper" || gamerMove == "paper" && computerMove == "rock" || gamerMove == "rock" && computerMove == "scissors")
            {
                std::cout << "HUMAN VICTORY!!!\n";
            }
            else
            {
                std::cout << "NOBODIES VICTORY...\n";
            }
        }
        else
        {
            std::cout << "FUCK U\n";
            break;
        }
    }
    return 0;
}
