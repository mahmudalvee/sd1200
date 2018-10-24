


void setupLoadingPage(){
		iShowImage(0, 0, 900, 600, loadingImage);
		iSetColor(255, 255, 255);
		iText(400, 50, "LOADING...", GLUT_BITMAP_TIMES_ROMAN_24);
		
		//The Loading Bar
		iSetColor(r, g, b);
		iFilledRectangle(270, 10, size, 20);
}

//Generating random colors for the loading bar every 100 miliseconds 
void changeColor()
{
	r=rand()%255;
	g=rand()%255;
	b=rand()%255;
}


//This function will be called every 5 seconds if the iSetTimer is on and will put 1 in loadImage so that it loads the main menu.
void donotShowMenu(){ 
	loadImage = 1;
}

//This function will be called every 1 seconds if the iSetTimer is on and will increment 100 everytime it is called,
//so that the loading bar increases.
void loading(){
	size += 100;
}

//pauses all the timers
void pauseTimers()
{
	iPauseTimer(t);
	iPauseTimer(k);
	iPauseTimer(x);
}

