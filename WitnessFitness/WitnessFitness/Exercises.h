#pragma once
#include <string>



class Exercise {
	


private:
	std::string Name;
	std::string Category;
	std::string typeCode;
	//image
public:
	Exercise(std::string& a, std::string& b, std::string& c, int image);
	Exercise();
	void exerciseLoop(int exerciseInput, int intervalTime, Exercise UP[], Exercise SUP[], Exercise SLB[], Exercise LB[], Exercise SCO[], Exercise CO[]); // takes an array of times
	void DisplayStretch(Exercise a);
	void DisplayExercise(Exercise a);


};
