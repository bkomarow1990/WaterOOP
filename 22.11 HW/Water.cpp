#include <iostream>
#include "Water.h"
#include <string>
size_t Water::countWaterAreas = 0;
bool isDigit(const size_t& SIZE_, const string& string_) {
	for (size_t i = 0; i < SIZE_; i++)
	{
		if (!isdigit(string_[i]))
		{
		}
		else {
			return true;
		}
	}
	return false;
}
const string Water::getName() const
{
	return name;
}

const string Water::getWaterAreaType() const
{
	static string types[]{"UND","LAKE","RIVER","SEA","OCEAN"};
	return types[(int)type_water];
}

/* const string Water::getWaterAreaType() const
{
	static const string waterAreaType[]{"UND","LAKE","RIVER","SEA","OCEAN"};
	return waterAreaType[(int)type_water];
}
*/
const size_t Water::getWidth() const
{
	return width;
}

const size_t Water::getHeight() const
{
	return height;
}

const size_t Water::getMaxDepth() const
{
	return maxDepth;
}

size_t Water::getCountWaterAreas()
{
	return countWaterAreas;
}

void Water::setName(const string& name)
{
	if (!name.empty())
	{
		if (isDigit(name.length(),name))
		{
			this->name = name;
		}
	}
	else {
		cout << "Enter correct name" << endl;
	}
}

void Water::setWidth(const size_t& width)
{
	this->width = width;
}

void Water::setHeight(const size_t& height)
{
	this->height = height;
}

void Water::setMaxDepth(const size_t& max_depth)
{
	this->maxDepth = max_depth;
}

void Water::setTypeWater(const Type_water& tpwater)
{
	this->type_water = tpwater;
}

void Water::print() const
{
	cout << "Name: " << name<<endl;
	cout << "Type Water: "<<getWaterAreaType() << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
	cout << "MaxDepth: " << maxDepth << endl;
	cout << "Count Water Areas: " << countWaterAreas<<endl;
}



const size_t Water::getArea() const
{
	return width * height * maxDepth;
}

const size_t Water::getAreaWaterSurface() const
{
	return width*height;
}

bool Water::isWaterAreasSameType(const Water& one,const Water& two)
{
	if (one.getWaterAreaType()==two.getWaterAreaType())
	{
		return true;
	}
	else {
		return false;
	}
	
}

int Water::comparisonAreas(const Water& one, const Water& two)
{
	if (one.getArea() == two.getArea())
	{
		return 0;
	}
	else if (one.getArea()>two.getArea())
	{
		return 1;
	}
	else if (one.getArea() < two.getArea())
	{
		return -1;
	}
}

Water Water::getBiggestWaterAreaInArr(const Water arr[], const int size, const Type_water& tpwater)
{
	size_t maxIndex = 0;
	Water max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i].type_water == tpwater)
		{
			if (max.getArea() < arr[i].getArea())
			{
				max = arr[i];
				maxIndex = i;
			}
		}
	}
	return max;
}


Water::Water()
{
	name = "NoName";
	type_water = Water::Type_water::UND;
	width = 0;
	height = 0;
	maxDepth = 0;
	countWaterAreas++;
}

Water::Water(const string &name, const Type_water& tpwater, const size_t& width, const size_t& height, const size_t& maxDepth)
{
	setName(name);
	setTypeWater(tpwater);
	setWidth(width);
	setHeight(height);
	setMaxDepth(maxDepth);
	countWaterAreas++;
}

Water::~Water()
{
	countWaterAreas--;
}


