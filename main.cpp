#include <iostream>

#include "WidgetRepairs.h"

int main()
{
    std::vector<int> v = { 10, 0, 0, 4, 20 };

    WidgetRepairs W;
    std::cout << W.days(v, 8) << std::endl;
}