#include "SpecialCounter.h"
#include <iostream>

using namespace std;

SpecialCounter::SpecialCounter()
{
	begin = 0;
	end = 255;
	inc = 1;
	dec = 1;
	currValue = begin;
}

SpecialCounter::SpecialCounter(int st,int en, int incr, int decr)
{
	begin = st;
	end = en;
	inc = incr;
	dec = decr;
	currValue = begin;
}

SpecialCounter::~SpecialCounter()
{
}

void SpecialCounter::start()
{
	cout << "Enter number to Begin : ";
	cin >> begin;				//stores value from user into begin variable
	currValue = begin;			//sets the Current Value of the counter to the Start value
}

void SpecialCounter::stop()
{
	cout << "Enter number to Stop : ";
	cin >> end;					//stores value from user into end variable
}

void SpecialCounter::stepInc(int stepSize)	//changes the Increment of the counter
{
	inc = stepSize;
}

void SpecialCounter::stepDec(int stepSize)	//changes the Decrement of the counter
{
	dec = stepSize;
}

void SpecialCounter::down()					//counts the counter down by one Decrement
{
	currValue = currValue - dec;
	cout << endl << "The current value is : " << currValue <<endl;		//prints the current value
}

void SpecialCounter::up()					//counts the counter Up by one Increment
{
	if ((currValue + inc) > end){			//ensures that if the counter has reached the stopping value, it will not count up
		cout << "Counter has reached end value." << endl;
	}
	else{
		currValue = currValue + inc;
		cout << endl << "The current value is : " << currValue << endl;	//prints the current value
	}
}
