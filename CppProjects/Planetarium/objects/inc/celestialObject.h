#pragma once
#include <string>


class celestialObject
{
public:
	celestialObject() {};
	celestialObject(int x, int y, std::string name) : m_x(x), m_y(y), m_name(name) {};
	~celestialObject() {};




private:
	int m_x = 0;
	int m_y = 0;  //coordinates

	std::string m_name = "";


};