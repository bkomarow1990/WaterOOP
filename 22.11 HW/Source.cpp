#include <iostream>
#include <string>
#include "Water.h"
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	Water jji;
	jji.print();
	Water fx("Wisimka",Water::Type_water::LAKE,90,80,220);
	fx.print();
	Water three;
	three.setName("Black Sea");
	three.setTypeWater(Water::Type_water::LAKE);
	three.print();
	cout << "=============BOOL CHECK TYPES==============" << endl;
	cout<<Water::isWaterAreasSameType(fx, three)<<endl;
	cout << "=============comparisonAreas==============" << endl;
	cout << Water::comparisonAreas(fx,three)<<endl;
	cout << "=============BiggestWaterAreaInMassive==============" << endl;
	Water water_arr[5];
	for (size_t i = 0; i < 5; i++)
	{
		water_arr[i].setHeight(rand()% 100);
		water_arr[i].setWidth(rand() % 100);
		water_arr[i].setMaxDepth(rand() % 100);
		water_arr[i].setTypeWater(Water::Type_water::SEA);
		cout<<"Area of "<<i+1<<" element = "<<water_arr[i].getArea()<<endl;
	}
	cout << "MAX ARR (down)" << endl;
	Water::getBiggestWaterAreaInArr(water_arr, 5, Water::Type_water::SEA).print();
	return 0;
}