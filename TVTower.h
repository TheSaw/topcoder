#ifndef TOPCODER_TVTOWER_H
#define TOPCODER_TVTOWER_H

#include <algorithm>
#include <vector>

class TVTower
{
public:
    double minRadius(std::vector<int> x, std::vector<int> y);

private:
    double calcDistance(int x1, int y1, int x2, int y2);

};

// BULLSHIT, solution is not correct

double TVTower::minRadius(std::vector<int> x, std::vector<int> y)
{
    double maxDistance = -1;

    for (int i = 0; i < x.size(); ++i)
        for (int j = 0; j < x.size(); ++j)
        {
            maxDistance = std::max(maxDistance, calcDistance(x[i], y[i], x[j], y[j]));
        }

    return maxDistance / 2;
}

inline double TVTower::calcDistance(int x1, int y1, int x2, int y2)
{
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}


#endif TOPCODER_TVTOWER_H