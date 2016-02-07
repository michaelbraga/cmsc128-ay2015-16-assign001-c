#include <stdio.h>
#include <string.h>

// Helper functions
/*******************************************************************************
	printNum()
	A function that prints the equivalent word of a certain number
	from 1-20, 30, 40, 50, 60, 70, 80, 90
*******************************************************************************/
void printNum(int num);
/*******************************************************************************
	handleHundreds()
	A function that handles the printing of the equivalent word of a number
	from 0-999
*******************************************************************************/
void handleHundreds(int num);

// Main functions
/*******************************************************************************
	numToWords()
	A function that prints the equivalent word for a number
	intendedly from 0 - 1000000, but can accomodate up to 999999999
*******************************************************************************/
void numToWords(int num);
int wordsToNum(/* arguments */);
char * wordsToCurrency(/* arguments */);
void numberDelimited(/* arguments */);
