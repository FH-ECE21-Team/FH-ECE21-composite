#pragma once
#include <string>
#include <map>

class SensorValues
{
public:

    void addMeasurement(std::string name, float measurement)
    {
        _measuredData.insert({name, measurement,getTime()});
    }

    auto begin()       { return _measuredData.begin(); }
    auto end()          { return _measuredData.end(); }

    
private:
    std::map<std::string, float,std::time_t> _measuredData;
    std::time_t getTime()
    {
        time_t currentTime;
        time(&currentTime);
        return currentTime;
    }
};
