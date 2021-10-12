#include<iostream>
#include "functions.h"


int main()
{	
	greet();
	string codeword = "awesome";
	string answer ="_______";
	int misses = 0;
	vector <char> incorrect_guesses;
	bool guess = false;
	char letter;
	
	while (answer != codeword && misses < 7)
	{
		display_hangman(misses);
		display_status(misses, incorrect_guesses, answer);
		cout<<"\n*********************************************************************** \n";
		cout<<"\n\nPlease guess a letter in the codeword: \n";
		cin>>letter;
		
		for (int i = 0; i < codeword.length(); i++ )
		{
			if (codeword[i]==letter)
			{
				guess  = true;
				answer[i] = letter;
			}
		}
		if (guess == true)
		{
			cout<<"\nYour guess is correct!\n";
			if (answer == codeword)
			{
				cout<<"\ncongratulations! you won!\n";
				cout<<"\nthe codeword was:\n";
				cout<<answer<<"\n";
			}
		}
		else
		{
			cout<<"\nIncorrect, another portion of your friend is hanged\n";
			misses++;
			incorrect_guesses.push_back(letter);
		}
		guess = false;		
	}
	
	end_game(answer, codeword);
	return 0;
}
