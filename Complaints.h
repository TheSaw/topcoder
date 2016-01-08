#ifndef TOPCODER_COMPLAINTS_H
#define TOPCODER_COMPLAINTS_H

#include <vector>

class Complaints
{
public:
    int	howMany(std::vector<int> line);
};

int Complaints::howMany(std::vector<int> line)
{
    int count = 0;

    for (int i = 0; i < line.size(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (line[j] < line[i])
            {
                ++count;
            }
        }

    }

    return count;
}

#endif TOPCODER_COMPLAINTS_H