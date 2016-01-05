#ifndef TOPCODER_WIDGETREPAIRS_H
#define TOPCODER_WIDGETREPAIRS_H

#include <vector>


class WidgetRepairs
{
public:
    int days(std::vector<int> arrivals, int numPerDay);


};

int WidgetRepairs::days(std::vector<int> arrivals, int numPerDay)
{
    arrivals.resize(1000, 0);

    for (int i = 0; i < arrivals.size() - 1; ++i)
    {
        if (arrivals[i] != -1)
        {
            int remaining = (arrivals[i] > numPerDay) ? arrivals[i] - numPerDay : 0;
            arrivals[i + 1] += remaining;
        }
    }

    int count = 0;

    count = std::count(arrivals.begin(), arrivals.end(), 0);
    count = arrivals.size() - count;

    return count;
}


#endif TOPCODER_WIDGETREPAIRS_H