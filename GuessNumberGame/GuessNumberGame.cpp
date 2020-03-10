#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <climits>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;

unsigned int option = 0, guess_number = 0, generated_number;

std::vector<unsigned int> guessed_numberlist;

void playgame()
{
	int i = 0;
	cout<<"Game started"<<endl;

	do
	{
		cout<<"Enter guess_number value"<<endl;
		cin>>guess_number;

		guessed_numberlist.push_back(guess_number);

		if (guess_number == generated_number)
		{
			for(std::vector<unsigned int>::iterator it = guessed_numberlist.begin(); it != guessed_numberlist.end(); ++it)
			{
				i++;
				cout<<"guessed number "<<i<<": "<<*it<<endl;
			}
			cout<<endl;
			cout<<"Number of guess: "<<i<<endl;
			cout<<"your guess number is correct which is: "<<guess_number<<endl;
			cout<<"Machine generated number was: "<<generated_number<<endl;
			cout<<endl;

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
		cout<<"Enter your option"<<endl;
		cout<<"1. Play\n";
		cout<<"0. Quit\n";

		generated_number = rand() % (100 + 1);

		cin>>option;

		switch(option)
		{
		case 0:
			cout<<"Good bye\n";
			break;
		case 1:
			guessed_numberlist.clear();
			playgame();
			break;
		default:
			break;
		}

	}while(option);

	return 0;
}

