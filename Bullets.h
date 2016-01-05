#ifndef TOPCODER_BULLETS_H
#define TOPCODER_BULLETS_H

#include <string>
#include <vector>

using namespace std;

class Bullets
{
public:
    int match(vector <string> guns, string bullet);
  
private:
    void shift(string &s);

};

int Bullets::match(vector<string> guns, string bullet)
{
    for (int i = 0; i < guns.size(); ++i)
    {
        string current = guns[i];
        for (auto cycle : bullet)
        {
            if (0 == bullet.compare(current))
            {
                return i;
            }
            else
            {
                shift(current);
            }
        }
    }

    return -1;
}

inline void Bullets::shift(string & s)
{
    s.push_back(s[0]);
    s.erase(0, 1);
}

#endif TOPCODER_BULLETS_H