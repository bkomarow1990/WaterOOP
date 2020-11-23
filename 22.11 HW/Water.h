#pragma once
#include <iostream>
#include <string>
#include <string>
using namespace std;
class Water
{
public: 
	enum class Type_water {UND,LAKE,RIVER,SEA,OCEAN};
	const string getName()const;
	const string getWaterAreaType()const;
	const size_t getWidth()const;
	const size_t getHeight()const;
	const size_t getMaxDepth()const;
	static size_t getCountWaterAreas();
	void setName(const string& name);
	// setTypeWater
	void setWidth(const size_t& width);
	void setHeight(const size_t& height);
	void setMaxDepth(const size_t& max_depth);
	void setTypeWater(const Type_water & tpwater);
	void print()const;
	const size_t getArea() const;
	const size_t getAreaWaterSurface()const;
	Water();
	Water(const string & name,const Type_water& tpwater,const size_t & width,const size_t &height,const size_t&maxDepth);
	~Water();
private:
	string name=nullptr;
	Type_water type_water = Type_water::UND;
	size_t width = 0;
	size_t height = 0;
	size_t maxDepth = 0;
	static size_t countWaterAreas;
};

