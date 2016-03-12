#pragma once
class SpecialCounter
{
private:
	int begin;
	int end;
	int inc;
	int dec;
	int currValue;

public:

	SpecialCounter();
	SpecialCounter(int,int,int,int);
	void start();
	void stop();
	void stepInc(int);
	void stepDec(int);
	void printCountUp();
	void up();
	void down();
	~SpecialCounter();
};

