#pragma once
#include <iostream>
#include "celestialObject.h"
#include <vector>

class planet : public virtual celestialObject
{
public:

	planet() {};

	std::vector<planet> populate();

private:
	int size = 0;
	int mass = 0;
	double rotation = 0.0;
	std::string info = "";
	

};