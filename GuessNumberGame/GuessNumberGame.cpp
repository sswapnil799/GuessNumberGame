#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <climits>

using std::cout;
using std::endl;
using std::cin;
using std::string;

unsigned int option = 0, guess = 0, rnd;

void playgame()
{
	cout<<"Game started\n\n";
	do
	{
		cout<<"Enter guess value\n\n";
		cin>>guess;

		if (guess == rnd)
		{
			cout<<"your guess is correct\n";
			cout<<"rnd: "<<rnd<<"guess: "<<guess<<endl;
			break;
		}
		else if(guess < rnd)
		{
			cout<<"guess is less than rand\n";
		}
		else
		{
			cout<<"guess is greater than rand\n";
		}
	}while(guess != rnd);
}

int main()
{
	srand(time(0));
	do{
		cout<<"Enter your option\n";
		cout<<"1. Play\n";
		cout<<"0. Quit\n\n";

		rnd = rand()/5555555;

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

