#ifndef TOPCODER_EXERCISEMACHINE_H_
#define TOPCODER_EXERCISEMACHINE_H_

#include <string>

class ExerciseMachine
{
public:
    int getPercentages(std::string time);

private:
    int toSec(std::string time);
};

int ExerciseMachine::getPercentages(std::string time)
{
    int sec = toSec(time);
    int count = 0;

    for (int i = 0; i <= sec; ++i)
    {
        int mod = (i * 100) % sec;
        int perc = (i * 100) / sec;
        if (mod == 0 && (perc != 0 && perc != 100))
        {
            ++count;
        }
    }

    return count;
}

inline int ExerciseMachine::toSec(std::string time)
{
    return std::stoi(time.substr(0, 2)) * 3600 + std::stoi(time.substr(3, 2)) * 60 + std::stoi(time.substr(6, 2));
}

#endif TOPCODER_EXERCISEMACHINE_H_
