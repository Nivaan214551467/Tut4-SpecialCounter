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
	cin >> begin;
	currValue = begin;
}

void SpecialCounter::stop()
{
	cout << "Enter number to Stop : ";
	cin >> end;
}

void SpecialCounter::stepInc(int stepSize)
{
	inc = stepSize;
}

void SpecialCounter::stepDec(int stepSize)
{
	dec = stepSize;
}

void SpecialCounter::down()
{
	currValue = currValue - dec;
	cout << currValue;
}

void SpecialCounter::up()
{
	currValue = currValue + inc;
	if (currValue > end){
		cout << "Counter has stopped." << endl;
	}
	else{
		cout << currValue;
	}
}


















void SpecialCounter::printCountUp()
{
	for (currValue = begin; currValue <= end;)
	{
		cout << currValue << endl;
		up();
	}

}
