#include <iostream>
#include <vector>
#include <string>

bool checkExist(std::string name, std::vector<std::string> namesList)
{
    for (int i = 0; i < namesList.size(); i++)
    {
        if (name == namesList[i])
        {
            return true;
        }
    }
    return false;
}

bool isDigital(std::string score)
{
    std::vector<char> data(score.begin(), score.end());
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] >= '0' && data[i] <= '9')
        {
            return true;
        }
    }
    data.clear();
    return false;
}

int isDigitLoop(std::string score)
{
    int res = 0;
    int scoreResult;

    while (res == 0)
    {
        std::cout << "Enter the score for this name:\n";
        std::cin >> score;

        bool existDigit = isDigital(score);

        if (existDigit == 0)
        {
            std::cout << "This is not a number!\n";
            res = 0;
            continue;
        }
        else
        {
            scoreResult = std::stoi(score);
            res = 1;
            break;
        }
    }
    return scoreResult;
}

int main()
{
    std::vector<std::string> namesList;
    std::vector<int> scoresList;
    std::string name;
    std::string score;
    int scoreResult;

    while (true)
    {
        std::cout << "Enter the name:\n";
        std::cin >> name;

        bool exist = checkExist(name, namesList);

        if (exist)
        {
            std::cout << "This name is already exist.\n";
            continue;
        }

        namesList.push_back(name);

        std::cout << "Enter the score for this name:\n";
        std::cin >> score;

        bool existDigit = isDigital(score);

        if (existDigit)
        {
            scoreResult = std::stoi(score);
            scoresList.push_back(scoreResult);
        }
        else
        {
            std::cout << "This is not a number!\n";
            scoresList.push_back(isDigitLoop(score));
        }

        std::cout << "Enter S (stop) or C (continue).\n";
        std::string process;
        std::cin >> process;

        if (process == "quit")
        {
            break;
        }
    }

    for (int i = 0; i < namesList.size(); i++)
    {
        std::cout << namesList[i] << " " << scoresList[i] << "\n";
    }
}