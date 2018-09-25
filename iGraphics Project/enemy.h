#include <vector>



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

		if(((fireX>= enemyX1 && fireX<= enemyX1+80) ||  (fireX+20>= enemyX1 && fireX+20<= enemyX1+80))  && ((fireY>= enemyY1 && fireY<= enemyY1+90) ||  (fireY+65>= enemyY1 && fireY+65<= enemyY1+80)))
		{
			score += 20;
			iShowImage(enemyX1,enemyY1,80,90,destroy);
			enemyY1 = 700;
			enemyX1 = rand()%800;
			bulletShow = false;//stop firing
			fireY=flightRedY+90;
			fireX=flightRedX+45;

		}

		if(((fireX>= enemyX2 && fireX<= enemyX2+80) ||  (fireX+20>= enemyX2 && fireX+20<= enemyX2+80))  && ((fireY>= enemyY2 && fireY<= enemyY2+90) ||  (fireY+65>= enemyY2 && fireY+65<= enemyY2+80)))
		{
			score += 20;
			iShowImage(enemyX2,enemyY2,80,90,destroy);
			enemyY2 = 700;
			enemyX2 = rand()%800;
			bulletShow = false;//stop firing
			fireY=flightRedY+90;
			fireX=flightRedX+45;

		}

		if(((fireX>= enemyX3 && fireX<= enemyX3+80) ||  (fireX+20>= enemyX3 && fireX+20<= enemyX3+80))  && ((fireY>= enemyY3 && fireY<= enemyY3+90) ||  (fireY+65>= enemyY3 && fireY+65<= enemyY3+80)))
		{
			score += 20;
			iShowImage(enemyX3,enemyY3,80,90,destroy);
			enemyY3 = 700;
			enemyX3 = rand()%800;
			bulletShow = false;//stop firing
			fireY=flightRedY+90;
			fireX=flightRedX+45;

		}

		if(((fireX>= stoneX1 && fireX<= stoneX1+35) ||  (fireX+20>= stoneX1 && fireX+20<= stoneX1+35))  && ((fireY>= stoneY1 && fireY<= stoneY1+40) ||  (fireY+65>= stoneY1 && fireY+65<= stoneY1+40)))
		{
			score += 10;
			iShowImage(stoneX1,stoneY1,35,40,destroy);
			stoneY1 = 900;
			stoneX1 = rand()%800;
			bulletShow = false;//stop firing
			fireY=flightRedY+90;
			fireX=flightRedX+45;
			

		}

		if(((fireX>= stoneX2 && fireX<= stoneX2+35) ||  (fireX+20>= stoneX2 && fireX+20<= stoneX2+35))  && ((fireY>= stoneY2 && fireY<= stoneY2+40) ||  (fireY+65>= stoneY2 && fireY+65<= stoneY2+40)))
		{
			score += 10;
			iShowImage(stoneX2,stoneY2,35,40,destroy);
			stoneY2 = 900;
			stoneX2 = rand()%800;
			bulletShow = false;//stop firing
			fireY=flightRedY+90;
			fireX=flightRedX+45;

		}
		
	}
}

void comingBullet()
{
	if(enemyY1 <=500 && bulletCheck1)
	{
		bullet1 = true;
		bulletY[0] -= 10;
		if(bulletY[0]<=0)
		{
			bullet1 = false;
			bulletCheck1 = false;
		}
	}
	if(enemyY2 <=500 && bulletCheck2)
	{
		bullet2 = true;
		bulletY[1] -= 10;
		if(bulletY[1]<=0)
		{
			bullet2 = false;
			bulletCheck2 = false;
		}
	}
	if(enemyY3 <=500 && bulletCheck3)
	{
		bullet3 = true;
		bulletY[2] -= 10;
		if(bulletY[2]<=0)
		{
			bullet3 = false;
			bulletCheck3 = false;
		}
	}
}

void enemyMove()
{
	if(gameRun)
	{
		enemyY1 -= 20;
		bulletY [0] -= 20;
		if(enemyY1<=10)
		{
			enemyY1 = 650;
			enemyX1 = rand()%800;
			bulletX [0] = enemyX1 + 30;
			bulletY [0] = enemyY1 - 40;
			bulletCheck1 = true;
		}
		
		enemyY2 -= 30;
		bulletY [1] -= 30;
		if(enemyY2<=10)
		{
			enemyY2 = 650;
			enemyX2 = rand()%800;
			bulletX [1] = enemyX2 + 30;
			bulletY [1] = enemyY2 - 40;
			bulletCheck2 = true;
		}

		enemyY3 -= 10;
		bulletY [2] -= 10;
		if(enemyY3<=10)
		{
			enemyY3 = 650;
			enemyX3 = rand()%800;
			bulletX [2] = enemyX3 + 30;
			bulletY [2] = enemyY3 - 40;
			bulletCheck3 = true;
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
			stoneY1 = 900;
			stoneX1 = rand()%800;
		}

		healthY -= 20;
		if(healthY <=0)
		{
			healthX = rand()%800;;
			healthY = 2000;
		}

		if(((flightRedX>= enemyX1 && flightRedX<= enemyX1+80) ||  (flightRedX+120>= enemyX1 && flightRedX+120<= enemyX1+80))  && ((flightRedY>= enemyY1 && flightRedY<= enemyY1+90) ||  (flightRedY+90>= enemyY1 && flightRedY+90<= enemyY1+80)))
		{
			power =- 40;
			iShowImage(enemyX1,enemyY1,80,90,destroy);
			enemyY1 = 700;
			enemyX1 = rand()%800;
		}

		if(((flightRedX>= enemyX2 && flightRedX<= enemyX2+80) ||  (flightRedX+120>= enemyX2 && flightRedX+120<= enemyX2+80))  && ((flightRedY>= enemyY2 && flightRedY<= enemyY2+90) ||  (flightRedY+90>= enemyY2 && flightRedY+90<= enemyY2+80)))
		{
			power =- 40;
			iShowImage(enemyX2,enemyY2,80,90,destroy);
			enemyY2 = 700;
			enemyX2 = rand()%800;

		}

		if(((flightRedX>= enemyX3 && flightRedX<= enemyX3+80) ||  (flightRedX+120>= enemyX3 && flightRedX+120<= enemyX3+80))  && ((flightRedY>= enemyY3 && flightRedY<= enemyY3+90) ||  (flightRedY+90>= enemyY3 && flightRedY+90<= enemyY3+80)))
		{
			power =- 40;
			iShowImage(enemyX3,enemyY3,80,90,destroy);
			enemyY3 = 700;
			enemyX3 = rand()%800;
			
		}

		if(((flightRedX>= stoneX1 && flightRedX<= stoneX1+35) ||  (flightRedX+120>= stoneX1 && flightRedX+120<= stoneX1+35))  && ((flightRedY>= stoneY1 && flightRedY<= stoneY1+40) ||  (flightRedY+90>= stoneY1 && flightRedY+90<= stoneY1+40)))
		{
			power =- 10;
			iShowImage(stoneX1,stoneY1,35,40,destroy);
			stoneY1 = 900;
			stoneX1 = rand()%800;
		}

		if(((flightRedX>= stoneX2 && flightRedX<= stoneX2+35) ||  (flightRedX+120>= stoneX2 && flightRedX+120<= stoneX2+35))  && ((flightRedY>= stoneY2 && flightRedY<= stoneY2+40) ||  (flightRedY+90>= stoneY2 && flightRedY+90<= stoneY2+40)))
		{
			power =- 10;
			iShowImage(stoneX2,stoneY2,35,40,destroy);
			stoneY2 = 900;
			stoneX2 = rand()%800;
		}

		if(((flightRedX>= healthX && flightRedX<= healthX+35) ||  (flightRedX+120>= healthX && flightRedX+120<= healthX+35))  && ((flightRedY>= healthY && flightRedY<= healthY+40) ||  (flightRedY+90>= healthY && flightRedY+90<= healthY+40)))
		{
			healthX = rand()%800;;
			healthY = 2000;
			power = 100;
		}
	}
}