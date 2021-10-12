#include "functions.h"

void greet()
{
	cout<<"---------------------------------------------------------------------------------------------";
	cout<<"\nHangman game. This is going to be exciting.\n";
	cout<<"---------------------------------------------------------------------------------------------";
	cout<<"\nSave your friend from being hanged by guessing the codeword!\n";	
}


void display_hangman(int misses)
{
	switch (misses) {
		case 1:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
		case 2:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"  |   | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
		case 3:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"  |   | \n";
				cout<<" /    | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
		case 4:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"  |   | \n";
				cout<<" /|   | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
		case 5:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"  |   | \n";
				cout<<" /|\\  | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
		case 6:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"  |   | \n";
				cout<<" /|\\  | \n";
				cout<<" /    | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
		case 7:
			{
				cout<<"  +---+ \n";
				cout<<"  |   | \n";
				cout<<"  O   | \n";
				cout<<"  |   | \n";
				cout<<" /|\\  | \n";
				cout<<" / \\  | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"      | \n";
				cout<<"========= \n";
				break;
			}
	}
}
void display_status(int misses, vector<char> incorrect_guesses, string answer)
{
	if (misses > 0)
	{
		cout<<"\nyour incorrect guesses so far are:\n";
		for (int i = 0; i < incorrect_guesses.size(); i++)
		{
			cout<<incorrect_guesses[i]<<" ";
		}
	}
	cout<<"\nThe guessed answer so far is:\n";
	for (int i = 0; i < answer.length(); i++)
	{
		cout<<answer[i]<<" ";
	}
	cout<<"\n";
	
}

void end_game(string answer, string codeword)
{
	if(answer == codeword)
	{
		cout<<"\nYou saved your friend ass from being hanged!\n";
	}
	else
	{
		cout<<"\nOh, your friend ass is hanged!\n"<<endl;
	}
}
