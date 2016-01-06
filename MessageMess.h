#ifndef TOPCODER_MESSAGEMESS_H_
#define TOPCODER_MESSAGEMESS_H_

#include <unordered_set>
#include <list>
#include <string>
#include <vector>

class MessageMess
{
public:
    std::string restore(std::vector<std::string> dictionary, std::string message);

private:
    bool process(std::string message, std::string &ret);

    std::unordered_set<std::string> dict;
};

std::string MessageMess::restore(std::vector<std::string> dictionary, std::string message)
{
    dict.insert(dictionary.begin(), dictionary.end());
        
    std::string result;
    bool success = process(message, result);

    if (success && result[result.size() - 1] == ' ')
    {
        result.erase(result.size() - 1);
    }

    if (!success)
    {
        result = "IMPOSSIBLE!";
    }
    else
    {
        int realcount = std::count(result.begin(), result.end(), ' ');
        if (result.size() - realcount > message.size())
        {
            result = "AMBIGUOUS!";
        }
    }

    return result;
}

inline bool MessageMess::process(std::string message, std::string &ret)
{
    bool complete = false;

    if (message.empty())
    {
        return true;
    }

    for (int i = 1; i <= message.size(); ++i)
    {
        if (dict.find(message.substr(0, i)) != dict.end())
        {
            bool temp = process(message.substr(i), ret);
            complete = temp || complete;

            if (complete)
            {
                ret = message.substr(0, i) + " " + ret;
            }
        }
    }    

    return complete;
}

#endif TOPCODER_MESSAGEMESS_H_
