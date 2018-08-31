

void enemyComing(){
	enemyY -= 10;
	if(enemyY<0)
     enemyY=600;
}

void enemyMove()
{
	if(flag3==0)
	{
	enemyTime = iSetTimer( 250, enemyComing );
	flag3=1;
	}
}


void comingBullet()//time period of changing fire's position
{
fireY+=20;
if(fireY>=600) //screen height; when fire reaches at the top,it'll resume the position  
{
iPauseTimer(fireTime);
flag1=0;//stop firing
fireY=flightRedY+30;
}	
}