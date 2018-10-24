#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED
#include"myVariables.h"


struct mainCars{

	int carX;
	int carY;
	int carWidth;
	int carHeight;
	
	mainCars()
	{
	carY = height;
	carWidth = 62;
	carHeight = 120;
	carX = rand() % (roadWidth-carWidth-10) + roadX;
	
	}

	
}mainCar1, mainCar2,policeCar1,policeCar2;


/*moves down and repeat all objects in the background as well as road;called from iMain;a parameter of iSetTimer;return type void*/
void mainCarsChange()
{

	for (int i = 0; i < 14; i++)
	{
		roadDiv[i] -= roadSpeed;
	}

	for (int i = 0; i < 14; i++)
	{
		if (roadDiv[i] + roadDivHeight <= 0){
			roadDiv[i] = height;
		}
	}

	for (int i = 0; i < 12; i++)
	{
		buildingY[i] -= roadSpeed;
	}

	for (int i = 0; i < 12; i++)
	{
		if (buildingY[i] + buildingHeight <= 0)
		{
			buildingY[i] = height;
		}
	}


	for (int i = 0; i < 20; i++)
	{
		treeY[i] -= roadSpeed;
	}

	for (int i = 0; i < 20; i++)
	{
		if (treeY[i] + treeHeight[i] <= 0)
		{
			treeY[i] = height;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		rockY[i] -= roadSpeed;
	}
	for (int i = 0; i < 8; i++)
	{
		if (rockY[i] + rockHeight[i] <= 0)
		{
			rockY[i] = height;
		}
	}



	if (policeCarX+policeCarWidth >= roadX + roadWidth){
		policeCarX = roadX + roadWidth-policeCarWidth;
	}
	if (policeCarX <= roadX){
		policeCarX = roadX;
	}




	if (mainCarX + mainCarWidth >= roadX + roadWidth){
		mainCarX = roadX + roadWidth - mainCarWidth;
	}
	if (mainCarX <= roadX){
		mainCarX = roadX;
	}
	if (policeCar1.carY + policeCar1.carHeight <= 0)
	{
		policeCar1.carX = rand() % (roadWidth - policeCar1.carWidth) + roadX;
		policeCar1.carY = height;
	}
	else
		policeCar1.carY -= mainCarSpeed1;

	if (policeCar2.carY + policeCar1.carHeight <= 0)
	{
		policeCar2.carX = rand() % (roadWidth - policeCar2.carWidth) + roadX;
		policeCar2.carY = height;
	}
	else
		policeCar2.carY -= mainCarSpeed2;






	if (mainCar1.carY + mainCar1.carHeight <= 0)
	{
		mainCar1.carX = rand() % (roadWidth - mainCar1.carWidth) + roadX;
		mainCar1.carY = height;
	}
	else
		mainCar1.carY -= mainCarSpeed1;


	if (mainCar2.carY + mainCar1.carHeight <= 0)
	{
		mainCar2.carX = rand() % (roadWidth - mainCar2.carWidth) + roadX;
		mainCar2.carY = height;

	}
	else
		mainCar2.carY -= mainCarSpeed2;


}




#endif // MYHEADER_H_INCLUDED