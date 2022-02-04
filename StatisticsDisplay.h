#pragma once

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class StatisticsDisplay : public Observer, public DisplayElement
{
private:
    float maxTemp;
    float minTemp;
    float tempSum;
    int numReadings;
    Subject* weatherData;
public:
    StatisticsDisplay(Subject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};

