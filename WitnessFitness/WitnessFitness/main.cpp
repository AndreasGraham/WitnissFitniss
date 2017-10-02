#include "Exercises.h"

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
	//Get the time, put in now
	time_t t = time(0);
	struct tm * now = localtime(&t);

	
	cout << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << endl;
	
	
	
	



	while (true) {};
	//Exercise 

}