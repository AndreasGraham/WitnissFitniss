#include "Exercises.h"
#include <iostream>
#include <ctime>

using namespace std;

Exercise::Exercise(std::string& a, std::string& b, std::string& c, int image) {
	Name = a;
	Category = b;
	typeCode = c;
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
			DisplayStretch(SUP[randomFuckingNumber]);
			DisplayExercise(UP[randomFuckingNumber]);
		}
		else if (exerciseInput == 2) { // lower body
			DisplayStretch(SLB[randomFuckingNumber]);
			DisplayExercise(LB[randomFuckingNumber]);
		}
		else if (exerciseInput == 3) { // core
			DisplayStretch(SCO[randomFuckingNumber]);
			DisplayExercise(CO[randomFuckingNumber]);
		}
	}

	if (now->tm_hour < 18) {
		exerciseLoop(exerciseInput, intervalTime, UP, SUP, SLB, LB, SCO, CO);
	}
}

void Exercise::DisplayStretch(Exercise a) {

}

void Exercise::DisplayExercise(Exercise a) {

}