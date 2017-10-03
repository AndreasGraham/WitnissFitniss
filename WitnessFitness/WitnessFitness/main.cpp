
#include "Exercises.h"
#include "sfwdraw.h"
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>


//Exercise UP[20];
//Exercise SUP[20];
//Exercise SLB[20];
//Exercise LB[20];
//Exercise SCO[20];
//Exercise CO[20];
#include <ctime>
#include <iostream>

using namespace std;

	Exercise UP[20];

	Exercise SUP[20];

	Exercise SLB[20];
	Exercise LB[20];
	Exercise SCO[20];
	Exercise CO[20];



int main() {

	
	
	

		//Display
		sfw::initContext(800, 600, "WitnissdaFitniss");
		// Colors
		sfw::setBackgroundColor(0xb7d7e5FF); 


		//Loads the image - does not display - inage is INT
		unsigned int imgBot = sfw::loadTextureMap("res/pushupdown.png");
		unsigned int imgMid = sfw::loadTextureMap("res/pushupmid.png");
		unsigned int imgTop = sfw::loadTextureMap("res/pushuptop.png");

		int g[3];
		g[0] = imgBot;
		g[1] = imgMid;
		g[2] = imgTop;
		std::string a = "MEOW";
		std::string b = "MEOWMEOW";
		std::string c = "MEOWMEOWMEOW";

		Exercise pushies(a, b, c, g);
		/*pushies.DisplayStretch();*/
		

		//Aray of image ints
		//unsigned int disp[3];
		////the array pieces 
		//disp[0] = imgBot;
		//disp[1] = imgMid;
		//disp[2] = imgTop;

		//
		//float Timer = 3;

		//int ImgIndx = 0;

		//// Update the rendering context- use as driver for the game loop. Returns false if the window should close.
		while (sfw::stepContext())
		{
			pushies.DisplayStretch();
		}
		//{
		//	Timer -= sfw::getDeltaTime();
		//	//counting down from timer
		//	if (Timer <= 0) //if timer is lessthanorequalto 0; increment img index(array position); 
		//	{
		//		ImgIndx++;
		//		//time between frames
		//		Timer = .5f;  
		//		if (ImgIndx > 2) //When the array is finished it loobs
		//		{
		//			ImgIndx = 0;
		//		}
		//	}

		//	//draws the array of images to screen
		//	sfw::drawTexture(disp[ImgIndx], 400, 300, 300, 400);



		//}
		

		sfw::termContext();




	while (true) {};
	//Exercise 

}