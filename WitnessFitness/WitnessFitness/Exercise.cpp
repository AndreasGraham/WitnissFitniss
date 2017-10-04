#include "Exercises.h"
#include "sfwdraw.h"
#include <iostream>
#include <ctime>

using namespace std;

Exercise::Exercise(std::string& a, /*std::string& b, std::string& c,*/ int d[3]) {
	/*Name = a;
	Category = b;
	typeCode = c;*/
	img[0] = d[0];
	img[1] = d[1];
	img[2] = d[2];
	Timer = 3.0f;
	ImgIndx = 0;
}

Exercise::Exercise() {

}

void Exercise::exerciseLoop(int exerciseInput, int intervalTime, Exercise UP[20], Exercise SUP[20], Exercise SLB[20], Exercise LB[20], Exercise SCO[20], Exercise CO[20]) {
	time_t t = time(0);
	struct tm * now = localtime(&t);
	
	if (intervalTime == now->tm_min) {
		
		srand(time(NULL));
		int randomFuckingNumber = rand() % 20;

		if (exerciseInput == 1) { // upper body
			SUP[randomFuckingNumber].DisplayStretch();
			SUP[randomFuckingNumber].DisplayExercise();
			/*DisplayStretch(SUP[randomFuckingNumber]);
			DisplayExercise(UP[randomFuckingNumber]);*/
		}
		else if (exerciseInput == 2) { // lower body
			SLB[randomFuckingNumber].DisplayStretch();
			LB[randomFuckingNumber].DisplayExercise();
		}
		else if (exerciseInput == 3) { // core
			SCO[randomFuckingNumber].DisplayStretch();
			CO[randomFuckingNumber].DisplayExercise();
		}
	}
	// display rest
	if (now->tm_hour < 18) {
		exerciseLoop(exerciseInput, intervalTime, UP, SUP, SLB, LB, SCO, CO);
	}
}

void Exercise::DisplayStretch()
{
	Timer -= sfw::getDeltaTime();
	//counting down from timer
	if (Timer <= 0) //if timer is lessthanorequalto 0; increment img index(array position); 
	{
		ImgIndx++;
		//time between frames
		Timer = 0.5f;

		ImgIndx = ImgIndx % 3;
	}
	sfw::drawTexture(img[ImgIndx], 400, 300, 300, 400);

	std::cout << "IDX: " << ImgIndx << std::endl;
	std::cout << "TIMER: " << Timer << std::endl;
}

void Exercise::DisplayExercise( ) {

}