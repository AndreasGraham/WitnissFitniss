#pragma once
#include <string>



class Exercise {
	


private:
	std::string Name;
	std::string Category;
	std::string typeCode;

	float Timer;
	int ImgIndx;

	int img[3];
	


public:
	Exercise(std::string& a, /*std::string& b, std::string& c,*/ int d[3]);
	Exercise();
	void exerciseLoop(int exerciseInput, int intervalTime, Exercise UP[], Exercise SUP[], Exercise SLB[], Exercise LB[], Exercise SCO[], Exercise CO[]); // takes an array of times
	void DisplayStretch();
	void DisplayExercise();


};
