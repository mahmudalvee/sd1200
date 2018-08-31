#include "iGraphics.h"
#include "myVariables.h"
#include "loadingPage.h"
#include "loadingImages.h"
#include "menuPage.h"
#include "timerSetups.h"
//#include "enemy.h"


//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://


void iDraw()
{

	//When the loading stage is over the timers will be paused.
	if(loadImage != 0){
		//pauses the defined timers.(more info in the loadingPage.h file)
		pauseTimers();
	}
	//The loading stage
	if(loadImage == 0){
		//setups the loading page.(more info in the loadingPage.h file)
		setupLoadingPage();
	}
		
	//After the loading stage
	else if(loadImage == 1){
		//setups the menu page.(more info in the menuPage.h file)
		setupMenuPage();
		//Establishing menu page controls.(more info in the menuPage.h file)
		changePagesInMenu();
	}
		
}


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

	//printf("%d %d\n", mx, my);
	

	//When it is in the main menu
	if(loadImageMenu == 0){  
		//Establishing button hover functionalities in the menu page.(more info in the menuPage.h file)
		menuButtonHoverFeature(mx, my);
	}
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//Establishing clicking functionalities in the menu page.(more info in the menuPage.h file)
		printf("x: %d y: %d\n", mx, my);
		
		menuButtonClickingFeature(mx, my);
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void comingBullet();//go to enemy.h
void iKeyboard(unsigned char key)
{

 if(key == ' ')
	{   
		
		flag1=1;//flag1 is up 
		if(flag2==1)
		{
			iResumeTimer(fireTime);
		}
		if(flag2==0)
		{
		fireTime=iSetTimer(30,comingBullet);//starting fire
		flag2=1;
		}
		
	}

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if(key==GLUT_KEY_UP)
	{
	fireX=flightRedY += flightRedMoveY;
	}
	else if(key==GLUT_KEY_DOWN)
	{
	fireX=flightRedY -= flightRedMoveY;
	}
	if(key==GLUT_KEY_LEFT)
	{
	fireX=flightRedX -= flightRedMoveX;
	}
	if(key==GLUT_KEY_RIGHT)
	{
	fireX=flightRedX += flightRedMoveX;
	}









}


int main()
{
	//Setting up timers (more info in timerSetups.h)
	setupTimers();

	iInitialize(900, 600, "StarTrek");

	//Loading Images
	loadImages(); 

	iStart();

	return 0;
}