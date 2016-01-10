#ifndef TOPCODER_CCIPHER_H_
#define TOPCODER_CCIPHER_H_

#include <string> 

class CCipher
{
public:
    std::string decode(std::string cipherText, int shift);

};

std::string CCipher::decode(std::string cipherText, int shift)
{
    std::string result;

    for (auto c : cipherText)
    {
        char shifted = c - shift;
        if (shifted < 65)
        {
            shifted = 'Z' - (65 - shifted);
        }
        result.push_back(shifted);
    }

    return result;
}

#endif TOPCODER_CCIPHER_H_
