#ifndef TOPCODER_TIME_H
#define TOPCODER_TIME_H

#include <string>
#include <sstream>

class Time
{
public:
    std::string whatTime(int seconds);
};


std::string Time::whatTime(int seconds)
{
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int rem_seconds = seconds - (minutes * 60) - (hours * 3600);

    std::stringstream result;
    result << hours << ":" << minutes << ":" << rem_seconds;

    return result.str();
}

#endif TOPCODER_TIME_H