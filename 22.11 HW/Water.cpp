#include "Water.h"
#include <iostream>
#include <string>
size_t Water::countWaterAreas = 0;

const string Water::getName() const
{
	return name;
}

const string Water::getWaterAreaType() const
{
	string types[]{"UND","LAKE","RIVER","SEA","OCEAN"};
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
	this->name = name;
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
	cout << "Type water: " << getWaterAreaType();
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

Water::Water()
{}

Water::Water(const string &name, const Type_water& tpwater, const size_t& width, const size_t& height, const size_t& maxDepth)
{
	setName(name);
	setTypeWater(tpwater);
	setWidth(width);
	setHeight(height);
	setMaxDepth(maxDepth);
}

Water::~Water()
{
	if (!name.empty())
	{
		cout << "Dctor for name" << endl;
		name = nullptr;
	}
}


