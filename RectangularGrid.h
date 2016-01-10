#ifndef TOPCODER_RECTANGULAR_GRID_H
#define TOPCODER_RECTANGULAR_GRID_H

class RectangularGrid
{
public:
    long long countRectangles(int width, int height);

};

long long RectangularGrid::countRectangles(int width, int height)
{
    long long cnt = 0;

    for (int i = 1; i <= width; ++i)
    {
        for (int j = 1; j <= height; ++j)
        {
            if (i != j)
            {
                cnt += (width - (i - 1)) * (height - (j - 1));
            }
        }
    }

    return cnt;
}

#endif TOPCODER_RECTANGULAR_GRID_H
