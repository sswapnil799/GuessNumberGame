#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <climits>

using std::cout;
using std::endl;
using std::cin;
using std::string;

unsigned int option = 0, guess_number = 0, generated_number;

void playgame()
{
	cout<<"Game started\n\n";
	do
	{
		cout<<"Enter guess_number value\n\n";
		cin>>guess_number;

		if (guess_number == generated_number)
		{
			cout<<"your guess_number is correct\n";
			cout<<"generated_number is: "<<generated_number<<endl<<"guess_number is: "<<guess_number<<endl;
			break;
		}
		else if(guess_number < generated_number)
		{
			cout<<"guess_number is less than generated_number\n";
		}
		else
		{
			cout<<"guess_number is greater than generated_number\n";
		}
	}while(guess_number != generated_number);
}

int main()
{
	srand(time(0));
	do{
		cout<<"Enter your option\n";
		cout<<"1. Play\n";
		cout<<"0. Quit\n\n";

		generated_number = rand()/5555555;

		cin>>option;

		switch(option)
		{
		case 0:
			cout<<"Good bye\n";
			break;
		case 1:
			playgame();
			break;
		default:
			break;
		}

	}while(option);

	return 0;
}

