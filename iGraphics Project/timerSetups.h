


void setupTimers(){
	//Setting up timer after every 5 seconds the donotShowMenu function will be called
	t = iSetTimer(6000, donotShowMenu); 
	
	//Setting up timer after every 1 seconds the loading function will be called
	k = iSetTimer(1000, loading); 
	
	//Setting up timer after every 100 miliseconds the changeColor function will be called
	x = iSetTimer(100, changeColor);  
	
}

