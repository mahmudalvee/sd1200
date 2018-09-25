#include <stdio.h>
#include <stdlib.h>
#include "enemy.h"

void mainGamePage();

void setupMenuPage(){
	iShowImage(0, 0, 900, 600, menu);

		//When hoveredButton not equals 1 then load the newGameButton.png image
		if(hoveredButton != 1)
			iShowImage(700, 370, 150, 100, newGameButton);
		//When hoveredButton = 1 then load the newGameButtonHover.png image
		else if(hoveredButton == 1){
			iShowImage(700, 370, 150, 100, newGameButtonHover);
		}
			

		//When hoveredButton not equals 2 then load the aboutButton.png image
		if(hoveredButton != 2)
			iShowImage(700, 300, 150, 100, aboutButton);
		//When hoveredButton = 2 then load the aboutButtonHover.png image
		else if(hoveredButton == 2)
			iShowImage(700, 300, 150, 100, aboutButtonHover);
		
		//When hoveredButton not equals 3 then load the settingsButton.png image
		if(hoveredButton != 3)
			iShowImage(700, 230, 150, 100, settingsButton);
		//When hoveredButton = 3 then load the settingsButtonHover.png image
		else if(hoveredButton == 3)
			iShowImage(700, 230, 150, 100, settingsButtonHover);

		//When hoveredButton not equals 4 then load the creditsButton.png image
		if(hoveredButton != 4)
			iShowImage(700, 160, 150, 100, creditsButton);
		//When hoveredButton = 4 then load the creditsButtonHover.png image
		else if(hoveredButton == 4)
			iShowImage(700, 160, 150, 100, creditsButtonHover);

		//When hoveredButton not equals 5 then load the scoreButton.png image
		if(hoveredButton != 5)
			iShowImage(700, 90, 150, 100, scoreButton);
		//When hoveredButton = 5 then load the scoreButtonHover.png image
		else if(hoveredButton == 5)
			iShowImage(700, 90, 150, 100, scoreButtonHover);
		
		//When hoveredButton not equals 6 then load the exitButton.png image
		if(hoveredButton != 6)
			iShowImage(700, 20, 150, 100, exitButton);
		//When hoveredButton = 5 then load the exitButtonHover.png image
		else if(hoveredButton == 6)
			iShowImage(700, 20, 150, 100, exitButtonHover);


}

void menuButtonClickingFeature(int mx, int my){
	//When it is in the main menu.
	if(loadImageMenu == 0){ 

			//When the New Game Button is clicked then it will load the desired page
			if( (mx >= 730 && mx <= 820)  && (my >= 390 && my <= 450) ) { //New Game Button
				loadImageMenu = 1;
			}

			//When the About Button is clicked then it will load the "about page" or the aboutPage.png.
			if( (mx >= 730 && mx <= 820)  && (my >= 320 && my <= 380) ) { //About Button
				loadImageMenu = 2;
			}

			//When the New Game Button is clicked then it will load the desired page
			if( (mx >= 730 && mx <= 820)  && (my >= 250 && my <= 310) ) { //Setting Button
				loadImageMenu = 3;
			}

			//When the Credits Button is clicked then it will load the "credits page" or the creditsPage.png.
			if( (mx >= 730 && mx <= 820)  && (my >= 180 && my <= 240) ) { //Credit Button
				loadImageMenu = 4;
			}

			//When the Score Button is clicked then it will load the "scores page" or the scoresPage.png.
			if( (mx >= 730 && mx <= 820)  && (my >= 110 && my <= 170) ) { //Score Button
				loadImageMenu = 5;
			}

			//When the Exit Button is clicked then it will load the "credits page" or the creditsPage.png.
			if( (mx >= 730 && mx <= 820)  && (my >= 40 && my <= 100) ) { //Exit Button
				loadImageMenu = 6;
			}
			
		}else{
			//When the Back Button is clicked then it will load the previous page or the main menu.
			if( (mx >= 750 && mx <= 850) && (my >= 20 && my <= 120) ){
				loadImageMenu = 0;
				gameRun = false;
			}
		}
}


void menuButtonHoverFeature(int mx, int my){
	//When the mouse cursor hovers over New Game Button then hoveredButton will be equals to 1
			if( (mx >= 730 && mx <= 820)  && (my >= 390 && my <= 450) ) {  // New Game Button
				hoveredButton = 1;
			}
			//When the mouse cursor hovers over About Button then hoveredButton will be equals to 2
			else if( (mx >= 730 && mx <= 820)  && (my >= 320 && my <= 380) ) { //About Button
				hoveredButton = 2;
			}
			//When the mouse cursor hovers over Setting Button then hoveredButton will be equals to 3
			else if( (mx >= 730 && mx <= 820)  && (my >= 250 && my <= 310) ) { //Setting Button
				hoveredButton = 3;
			}
			//When the mouse cursor hovers over Credits Button then hoveredButton will be equals to 4
			else if( (mx >= 730 && mx <= 820)  && (my >= 180 && my <= 240) ) { //Credits Button
				hoveredButton = 4;
			}
			//When the mouse cursor hovers over Scores Button then hoveredButton will be equals to 5
			else if( (mx >= 730 && mx <= 820)  && (my >= 110 && my <= 170) ) { //Score Button
				hoveredButton = 5;
			}
			//When the mouse cursor hovers over Exit Button then hoveredButton will be equals to 6
			else if( (mx >= 730 && mx <= 820)  && (my >= 40 && my <= 100) ) { //Exit Button
				hoveredButton = 6;
			//When the mouse cursor hovers out of any of the Buttons then hoveredButton will be equals to 0
			}else{
				hoveredButton = 0;
			}
}


void changePagesInMenu()
{
	switch(loadImageMenu)
	{
			//When it is 1, the new game page is opened 
			case 1:
				mainGamePage();
				gameRun = true;
			
				break;
			//When it is 2, the about page is opened 
			case 2:
				iShowImage(0, 0, 950, 600, aboutPage);
				iShowImage(750, 20, 120, 40, backButton);
				break;
			//When it is 3, the settings page is opened 
			case 3:
				iShowImage(0, 0, 900, 600, blank);
				iShowImage(750, 20, 120, 40, backButton);
				break;
			//When it is 4, the credits page is opened 
			case 4:
				iShowImage(0, 0, 900, 600, creditsPage);
				iShowImage(750, 20, 120, 40, backButton);
				break;
			//When it is 5, the scores page is opened 
			case 5:
				iShowImage(0, 0, 900, 600, scorePage);
				iShowImage(750, 20, 120, 40, backButton);
				break;
			//When it is 6, the programs stops executions.
			case 6:
				exit(0);
				break;
	}
}

void mainGamePage()
{
	iShowImage(0, 0, 900, 600, newgamePage);
	iShowImage(780,8,100, 30,backButton);
	iSetColor(255,255,255);
	iFilledRectangle(860,480,20,100);
	iSetColor(255,0,0);
	iFilledRectangle(860,480,20,power);
	char str[100];
	sprintf(str,"%d",score);
	iSetColor(255,255,255);
	iText(10,570,"Score",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(30,540,str,GLUT_BITMAP_TIMES_ROMAN_24);
	iShowImage(flightRedX, flightRedY, 120, 90, flightRed);
	iShowImage(enemyX1,enemyY1,80,90,enemy);
	iShowImage(enemyX2,enemyY2,80,90,enemy);
	iShowImage(enemyX3,enemyY3,80,90,enemy);
	iShowImage(stoneX1,stoneY1,35,40,stone1);
	iShowImage(stoneX2,stoneY2,35,40,stone2);
	iShowImage(healthX,healthY,35,40,health);

	if(enemyY1 <=500)
		iShowImage(bulletX[0],bulletY[0],10,50,bullet);
	if(enemyY2 <=500)
		iShowImage(bulletX[1],bulletY[1],10,50,bullet);
	if(enemyY3 <=500)
		iShowImage(bulletX[2],bulletY[2],10,50,bullet);

/*
	if(fireX>=enemyX&&fireY>=enemyY&&fireX<=enemyX+80&&fireY<=enemyY+70)
	{
		enemySaw = false;
		iShowImage(fireX,fireY,100,80,destroy);
		bulletShow = false;				
	}
*/	if(bulletShow)
	{
		iShowImage(fireX,fireY,20,65,fireball);
	}

	

}
