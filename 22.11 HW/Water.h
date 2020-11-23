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
	static bool isWaterAreasSameType(const Water& one, const Water& two);
	static int comparisonAreas(const Water&one, const Water&two);
	static Water getBiggestWaterAreaInArr(const Water arr[],const int size,const Type_water & tpwater);
	Water(); // default ctor
	Water(const string & name,const Type_water& tpwater,const size_t & width,const size_t &height,const size_t&maxDepth); //ctor with params
	~Water(); // dctor (deletes all fields of dynamic objectes)
private:
	string name;
	Type_water type_water;
	size_t width;
	size_t height;
	size_t maxDepth;
	static size_t countWaterAreas;
};

