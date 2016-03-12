#pragma once
class SpecialCounter
{
private:
	int begin;		//stores the starting value
	int end;		//stores the stopping value
	int inc;		//stores the increment value
	int dec;		//stores the decrement value
	int currValue;	//stores the current value of the counter

public:

	SpecialCounter();		//default constructor
	SpecialCounter(int,int,int,int);	//default constructor with arguments

	void start();			//changes the Starting value of the counter
	void stop();			//changes the Stopping value of the counter
	void stepInc(int);		//changes the Increment value of the counter
	void stepDec(int);		//changes the Decrement value of the counter
	void up();				//counts the counter Up by one Increment
	void down();			//counts the counter Down by one Decrement

	~SpecialCounter();
};

