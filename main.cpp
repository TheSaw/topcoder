#include <iomanip>
#include <iostream>
#include <vector>

#include "BinaryCode.h"

int main()
{
    BinaryCode B;
    for (auto v : B.decode(std::string("123210122")))
    {
        std::cout << v << std::endl;
    }
}