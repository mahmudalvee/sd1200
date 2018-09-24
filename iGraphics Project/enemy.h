#include <vector>

void enemyCreate()
{
	if(gameRun)
	{
		
	}
}

void pressingBullet()//time period of changing fire's position
{
	if(bulletShow)
	{
		fireY+=20;
		if(fireY>=600) //screen height; when fire reaches at the top,it'll resume the position  
		{
			bulletShow = false;//stop firing
			fireY=flightRedY+90;
			fireX=flightRedX+45;
		}	
	}
}

void comingBullet()
{

}

void enemyMove()
{
	if(gameRun)
	{
		enemyY1 -= 20;
		if(enemyY1<=10)
		{
			enemyY1 = 650;
			enemyX1 = rand()%800;
		}

		enemyY2 -= 30;
		if(enemyY2<=10)
		{
			enemyY2 = 650;
			enemyX2 = rand()%800;
		}

		enemyY3 -= 10;
		if(enemyY3<=10)
		{
			enemyY3 = 650;
			enemyX3 = rand()%800;
		}

		stoneY2 -= 25;
		if(stoneY2<=10)
		{
			stoneY2 = 900;
			stoneX2 = rand()%800;
		}

		stoneY1 -= 15;
		if(stoneY1<=10)
		{
			stoneY1 = 800;
			stoneX1 = rand()%800;
		}


	}
}