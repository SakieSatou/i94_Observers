#pragma once
#include "Subject.h"
#include <iostream>
#include <list>
using namespace std;

class WeatherData : Subject
{
private:
	list<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
public:
	WeatherData();
	void registerObserver(Observer* o);
	void removeObserver(Observer* o);
	void notifyObserver();
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
};