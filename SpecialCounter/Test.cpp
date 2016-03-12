#include <iostream>
#include "SpecialCounter.h"

using namespace std;

int main()
{
	SpecialCounter counter1;
	int ans;
	
	do{
		//  A Menu so different functions can be selected 
		cout << endl << "===================================================" << endl;
		cout << "1 - Change Begin Value" << endl;
		cout << "2 - Change End Value" << endl;
		cout << "3 - Change Increment" << endl;
		cout << "4 - Change Decrement" << endl;
		cout << "5 - Count Up" << endl;
		cout << "6 - Count Down" << endl << endl;
		cout << "0 - EXIT" << endl;

		cin >> ans;

		if (ans == 1)
			counter1.start();
		else if (ans == 2)
			counter1.stop();
		else if (ans == 3)
		{
			int tmp;
			cout << "Enter increment value : ";		//prompts user to enter Increment value
			cin >> tmp;			
			counter1.stepInc(tmp);
		}
		else if (ans == 4)
		{
			int tmp;
			cout << "Enter decrement value : ";		//prompts user to enter Decrement value
			cin >> tmp;
			counter1.stepDec(tmp);
		}
		else if (ans == 5)
			counter1++;
		else if (ans == 6)
			counter1--;
		else if (ans == 0)
			cout << "Counter will now exit.";
		else
			cout << "Invalid input";


	} while (ans != 0);




}