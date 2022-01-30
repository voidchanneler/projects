#pragma once
#include <iostream>
#include "celestialObject.h"
#include <vector>

class star : public virtual celestialObject
{
public:
	star() {};

	~star() {};

	std::vector<star> populate();

private:
	double velocity = 0.0;
	int size = 0;
	int mass = 0;
	int theta = 0; //angle of movement 
	
};