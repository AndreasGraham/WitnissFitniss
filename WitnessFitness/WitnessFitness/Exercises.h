#pragma once
#include <string>



class Exercise {
	Exercise(std::string& a, std::string& b, std::string& c);
	Exercise();


private:
	std::string Name;
	std::string Category;
	std::string typeCode;
	//image
public:
	void exerciseLoop(int a[]); // takes an array of times
	void DisplayStretch(Exercise a);
	void DesplayExercise(Exercise a);


};
