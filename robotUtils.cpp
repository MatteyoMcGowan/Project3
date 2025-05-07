#include <iostream>
#include "robotUtils.h"

using namespace std;

void robotUtils(){
	cout<<"This is the robot utilities: I include line detection, and stuff!"<<endl;
	}
	

	
double normaliseMotorSpeed(double percentage)
{
	double x = 0;
	if (percentage < -100 || percentage > 100) {
		cout << "Error";
	} else {
			x = percentage / 100 * 15 + 46;
		}
	return x;
}
