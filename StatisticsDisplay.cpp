#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(Subject* weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void update(float temperature, float humidity, float pressure) {

}