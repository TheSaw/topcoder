#ifndef TOPCODER_LEXER_H_
#define TOPCODER_LEXER_H_

#include <iostream>
#include <list>
#include <string>
#include <queue>
#include <vector>

using namespace std;

struct compareString
{
    bool operator()(string left, string right)
    {
        return left.size() < right.size();
    }
};

class Lexer
{
public:
    vector<string> tokenize(vector<string> tokens, string input);
};

vector<string> Lexer::tokenize(vector<string> tokens, string input)
{
    vector<string> result;

    while (!input.empty())
    {
        priority_queue<string, vector<string>, compareString> Q;

        for (string token : tokens)
        {
            if (input[0] == token[0])
            {
                Q.push(token);
            }
        }

        if (Q.empty())
        {
            input.erase(0, 1);
        }
        else
        {
            bool found = false;

            while (!Q.empty() && !found)
            {
                string token = Q.top();
                Q.pop();

                if (0 == token.compare(input.substr(0, token.size())))
                {
                    result.push_back(token);
                    input.erase(0, token.size());
                    found = true;
                }
            }

            if (!found)
            {
                input.erase(0, 1);
            }
        }
    }

    return result;
}

#endif TOPCODER_LEXER_H_