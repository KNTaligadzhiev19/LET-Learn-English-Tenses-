#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>
#include "DisplayFunction.h"

using namespace std;

// Starts the "Guess The Word" game
void playGuessTheWord(int& points);

// Checks the user's answers 
void CheckAnswerEx(string sentence[10], string condition, string mutualChoice, string answers[10], int& points);

// Checks the user's answers 
void checkAnswerExMultipleChoice(string sentence[10], string condition, string mutualChoice,
	string answers[10], string chooseAnswer[10], int& points);

// Holds commands
void irregularVerbsCommandFunctions(string verb, string irrVerbs[][3], string irregularVerbs[][3],
	int number, int rows);

// Practise irregular verbs
void practiseirregularVerbs();

// Runs the programme
void startProgramme();

// Uses for get back on the home page 
int processMenu(string mutualChoice);