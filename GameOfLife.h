#ifndef TOPCODER_GAMEOFLIFE_H
#define TOPCODER_GAMEOFLIFE_H

#include <string>
#include <vector>

class GameOfLife
{
public:
    int alive(std::vector<std::string> start, std::string rules, int generations);

private:
    int getNumAdj(std::vector<std::string> start, int x, int y);
};

int GameOfLife::alive(std::vector<std::string> start, std::string rules, int generations)
{
    std::vector<std::string> grid(start);

    for (int gen = 0; gen < generations; ++gen)
    {
        std::vector<std::string> workgrid(grid);

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[i].size(); ++j)
            {
                int cnt = getNumAdj(grid, i, j);

                switch (rules[cnt])
                {
                case 'D':
                    workgrid[i][j] = '.';
                    break;
                case 'S':
                    workgrid[i][j] = grid[i][j];
                    break;
                case 'B':
                    workgrid[i][j] = 'X';
                    break;
                }
            }
        }

        grid = workgrid;
    }

    int cntSurvived = 0;

    for (auto a : grid)
    {
        for (auto c : a)
        {
            if ('X' == c)
            {
                ++cntSurvived;
            }
        }
    }

    return cntSurvived;
}

inline int GameOfLife::getNumAdj(std::vector<std::string> start, int x, int y)
{
    int count = 0;

    for (int i = x - 1; i < x + 2; ++i)
        for (int j = y - 1; j < y + 2; ++j)
        {
            int procX = i;
            int procY = j;
            if (procX < 0)
                procX = start.size() - 1;
            if (procX > start.size() - 1)
                procX = 0;

            if (procY < 0)
                procY = start[procX].size() - 1;
            if (procY > start[procX].size() - 1)
                procY = 0;
            
            if ((procX != x || procY != y) &&
                (start[procX][procY] == 'X'))
            {
                ++count;
            }

            start[procX][procY] = '.';            
        }

    return count;
}


#endif TOPCODER_GAMEOFLIFE_H
