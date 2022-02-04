#pragma once
#include "Observer.h"

class Subject
{
public:
	virtual void registerObserver(Observer* o) = 0;
	virtual void remuveObserver(Observer* o) = 0;
	virtual void notyfiObserver() = 0;
};

