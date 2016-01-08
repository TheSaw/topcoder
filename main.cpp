#include <iomanip>
#include <iostream>
#include <vector>

#include "GameOfLife.h"
#include "Aaagmnrs.h"

int main()
{
    std::vector<std::string> s = { "J", "XSqzaLmAIFMlBavo XqnYemQxT xVIk  FyGmpjc IU", "mEaYQinYagSLuXqfmXtiPXxCVmqVzLbakiOjM F", "aiamXkNgBvxMCYLuFeFlIj OtQSmaXixYvzpQmQ" };
    //std::vector<std::string> s = { "J", "aba", "Ba  a", "AAB" };

    Aaagmnrs A;
    auto x = A.anagrams(s);

    for (auto a : x)
    {
        std::cout << a << std::endl;
    }

    /*
    std::vector<std::string> grid = { "X" };
    std::string rules = "SSSSSSSSS";
    int gen = 1000;

    GameOfLife G;
    std::cout << G.alive(grid, rules, gen) << " survived" << std::endl;

    system("PAUSE");*/
}