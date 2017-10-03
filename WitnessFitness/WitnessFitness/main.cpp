
#include "Exercises.h"
#include "sfwdraw.h"
#include <iostream>
#include <ctime>
#include <Windows.h>

//Exercise UP[20];
//Exercise SUP[20];
//Exercise SLB[20];
//Exercise LB[20];
//Exercise SCO[20];
//Exercise CO[20];
#include <ctime>
#include <iostream>
using namespace std;
int main() {


	Exercise UP[20];
	Exercise SUP[20];
	Exercise SLB[20];
	Exercise LB[20];
	Exercise SCO[20];
	Exercise CO[20];

	int main() {

		//Display
		sfw::initContext(800, 600, "WitnissdaFitniss");
		sfw::setBackgroundColor(0xb7d7e5FF);
		unsigned int imgBot = sfw::loadTextureMap("res/pushupdown.png");
		unsigned int imgMid = sfw::loadTextureMap("res/pushupmid.png");
		unsigned int imgTop = sfw::loadTextureMap("res/pushuptop.png");
		unsigned int disp[3];

		disp[0] = imgBot;
		disp[1] = imgMid;
		disp[2] = imgTop;

		float Timer = .2f;
		int ImgIndx = 0;
		while (sfw::stepContext())
		{
			Timer -= sfw::getDeltaTime();
			//for (int i = 0; i < 3; i++) 
			//{
			//	/*Sleep(1000);*/
			//	/*time_t start = time(0);
			//	double seconds_since_start = difftime(time(0), start);*/
			//	sfw::drawTexture(disp[i], 400, 300, 300, 400);
			//}
			if (Timer <= 0)
			{
				ImgIndx++;
				Timer = .05f;
				if (ImgIndx > 2)
				{
					ImgIndx = 0;
				}
			}

			sfw::drawTexture(disp[ImgIndx], 400, 300, 300, 400);



		}
		//Exercise 
		std::cout << "Time between exercises?" << std::endl;
		/*std::cin >> timeInterval;*/

		sfw::termContext();

	}



	while (true) {};
	//Exercise 

}