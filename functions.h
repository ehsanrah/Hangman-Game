#ifndef DEC_H
#define DEC_H

#include <iostream>
#include <vector>
using namespace std;

//declare functions

void greet();
void display(int misses);
void display_hangman(int misses);
void display_status(int misses, vector<char> incorrect_guesses, string answer);
void end_game(string answer, string codeword);

#endif
