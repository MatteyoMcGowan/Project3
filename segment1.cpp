#include <iostream>
#include "robotUtils.h"

using namespace std;

void segmentExplain(){
	cout<<"This is segment one!"<<endl;
	}

void segment1()
{
	robotUtils();
	cout<<normaliseMotorSpeed(-100.0)<<endl;
	cout<<normaliseMotorSpeed(0.0)<<endl;
	cout<<normaliseMotorSpeed(100.00)<<endl;
}
