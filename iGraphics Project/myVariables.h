#ifndef MY_VARIABLES_H
#define MY_VARIABLES_H

int loadingImage;

int r=255;
int g=255;
int b=255;

int menu;
int backButton;
int loadingImage2;

int aboutButton;
int aboutButtonHover;
int aboutPage;

int settingsButton;
int settingsButtonHover;

int newGameButton;
int newGameButtonHover;

int creditsButton;
int creditsButtonHover;

int exitButton;
int exitButtonHover;
int scoreButton;
int scoreButtonHover;



int loadImage = 0;
int loadImageMenu = 0;

int size = 0;


int hover = 0;
int hoveredButton = 0;


int blank;
int scorePage;
int newgamePage;
int creditsPage;

int t; // Timer Variable
int k;
int x;
int y;
int e;
int enemyTime;
int fireTime,destroy;
int enemyRender = 0;


//Object Variables

int flightRed;
int enemy;
int bullet;
int fireball; //newly added

int flightRedX = 20;
int flightRedY = 20;

int flightRedMoveX = 20;
int flightRedMoveY = 20;

int enemyX1=rand()%800;
int enemyY1=650;

int enemyX2=rand()%800;
int enemyY2=650;

int enemyX3=rand()%800;
int enemyY3=650;

int stoneX1 = rand()%800;
int stoneY1 = 800;

int stoneX2 = rand()%800;
int stoneY2 = 900;

int stone1;
int stone2;

//int flag1=0,flag2=0,flag3=0,flag4=0;
bool enemySaw = true;  //flag4
bool bulletShow = false; //flag1
bool gameRun = false;
bool bullet1 = false;
bool bullet2 = false;
bool bullet3 = false;
bool bulletCheck1 = true;
bool bulletCheck2 = true;
bool bulletCheck3 = true;

int flag2=0,flag3=0;
int fireX=flightRedX+55,fireY=flightRedY+90;
int bulletGo;
int bulletCome;
int bulletX [3] = { enemyX1+30 , enemyX2+30 , enemyX3+30 };
int bulletY [3] = { enemyY1-40 , enemyY2-40 , enemyY3-40 };

int power = 100;
int score = 0;
int healthX = rand()%800;;
int healthY = 2000;
int health;
#endif