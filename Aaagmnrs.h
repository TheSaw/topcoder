#ifndef TOPCODER_AAAGMNRS_H_
#define TOPCODER_AAAGMNRS_H_

#include <algorithm>
#include <string>
#include <vector>

class Aaagmnrs
{
public:
    std::vector <std::string> anagrams(std::vector <std::string> phrases);

private:
    bool isAnagram(std::string s1, std::string s2);
    void removeSpaces(std::string &s);
};

std::vector<std::string> Aaagmnrs::anagrams(std::vector<std::string> phrases)
{
    std::vector<std::string> phrases2(phrases);

    for (auto it = phrases2.begin(); it != phrases2.end(); ++it)
        for (auto in = it + 1; in != phrases2.end(); )
        {
            if (isAnagram(*in, *it))
            {
                in = phrases2.erase(in);
            }
            else
            {
                ++in;
            }
        }

    return phrases2;
}

inline bool Aaagmnrs::isAnagram(std::string s1, std::string s2)
{
    removeSpaces(s1);
    removeSpaces(s2);

    std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    return (s1.compare(s2) == 0);
}

inline void Aaagmnrs::removeSpaces(std::string & s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
        }
    }
}

#endif
