#ifndef TOPCODER_BINARYCODE_H_
#define TOPCODER_BINARYCODE_H_

#include <string>
#include <vector>

class BinaryCode
{
public:
    std::vector<std::string> decode(std::string &message);

private:
    std::string dec(std::string &message, int firstchar);
};

std::vector<std::string> BinaryCode::decode(std::string &message)
{
    std::vector<std::string> ret;
    ret.push_back(dec(message, 0));
    ret.push_back(dec(message, 1));

    return ret;
}

inline std::string BinaryCode::dec(std::string &message, int firstchar)
{
    std::vector<int> ret;
    ret.resize(message.size() + 1, -1);

    ret[0] = 0;
    ret[1] = firstchar;

    for (int i = 1; i < message.size(); ++i)
    {
        int digit = (i < 0) ? 0 : message[i - 1] - '0';
        ret[i + 1] = digit - ret[i-1] - ret[i];

        if (ret[i + 1] != 0 && ret[i + 1] != 1)
        {
            return "NONE";
        }
    }

    if (ret[ret.size() - 1] + ret[ret.size() - 2] != message[message.size() - 1] - '0')
    {
        return "NONE";
    }

    std::string result;
    result.resize(ret.size() - 1);

    for (int i = 0; i < ret.size() - 1; ++i)
    {
        result[i] = ret[i + 1] + '0';
    }

    return result;
}

#endif TOPCODER_BINARYCODE_H_
