#ifndef TOPCODER_EXECUTION_H
#define TOPCODER_EXECUTION_H

#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

class Execution
{
public:
    long long analyze(vector <string> code);

private:
    long long eval(string s);
    long long getNum(string &s);
};

long long Execution::analyze(vector<string> code)
{
    long long count = 0;
    string s = "";

    for (auto line : code)
    {
        s += line;
    }

    count = eval(s);
    
    return count;
}

inline long long Execution::getNum(string & s)
{
    long long digit = 0;
    bool done = false;
    
    while (!done)
    {
        if (!isdigit(s[0]))
        {
            if (digit != 0)
            {
                done = true;
            }
            s.erase(0, 1);
        }
        else
        {
            if (0 == digit && s[0] == '0')
            {
                s.erase(0, 1);
                return 0;
            }

            digit *= 10;
            digit += s[0] - '0';
            s.erase(0, 1);
        }
    }

    return digit;
}

inline long long Execution::eval(string s)
{
    long long count = 0;

    while (!s.empty())
    {
        if (s.substr(0, 3).compare("for") == 0)
        {
            long long digit = getNum(s);
            bool found = false;
            long long end = s.find_first_of('{');
            long long braces = 0;

            while (!found)
            {
                if (s[end] == '{')
                    ++braces;
                else if (s[end] == '}')
                    --braces;
                if (0 == braces)
                    found = true;
                ++end;
            }

            long long result = eval(s.substr(1, end - 1));
            result *= digit;
            count += result;

            s.erase(0, end);

        }
        else if (s.substr(0, 5).compare("BASIC") == 0)
        {
            ++count;
            s.erase(0, 5);
        }
        else
        {
            s.erase(0, 1);
        }
    }

    return count;
}

#endif TOPCODER_EXECUTION_H
