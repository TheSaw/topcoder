#ifndef TOPCODER_PRICING_H
#define TOPCODER_PRICING_H

#include <algorithm>
#include <vector>

class Pricing
{
public:
    int maxSales(std::vector<int> price);



};

int Pricing::maxSales(std::vector<int> price)
{
    std::sort(price.begin(), price.end());

    int m = 0;

    for (int g0 = 0; g0 < price.size(); ++g0)
        for (int g1 = g0; g1 < price.size(); ++g1)
            for (int g2 = g1; g2 < price.size(); ++g2)
                for (int g3 = g2; g3 < price.size(); ++g3)
                {
                   int calc = (g1 - g0) * price[g0] + (g2 - g1) * price[g1] + (g3 - g2) * price[g2] + (price.size() - g3) * price[g3];
                   m = std::max(m, calc);
                }

    return m;

}

#endif TOPCODER_PRICING_H
