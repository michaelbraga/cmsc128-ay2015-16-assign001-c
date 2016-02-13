#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	Uses: printNum();
*******************************************************************************/
void handleHundreds(int num);

/*******************************************************************************
	getNumber_1_to_9()
	A function that accepts a string and returns its equivalent integer value
	from 1-9
*******************************************************************************/
int getNumber_1_to_9(char * numWord);

/*******************************************************************************
	getNumber_11_to_19()
	A function that accepts a string and returns its equivalent integer value
	from 11-19
*******************************************************************************/
int getNumber_11_to_19(char * numWord);

/*******************************************************************************
	getNumber_20_to_90()
	A function that accepts a string and returns its equivalent integer value
	from 20, 30, 40, 50, 60, 70, 80, 90
*******************************************************************************/
int getNumber_20_to_90(char * numWord);
// =============================================================================== //

// Main functions
/*******************************************************************************
	numToWords()
	A function that prints the equivalent word for a number
	intendedly from 0 - 1000000
	Uses: handleHundreds();
*******************************************************************************/
void numToWords(int num);

/*******************************************************************************
	wordsToNum()
	A function that accepts a number in word form
	(from zero to 1 million) and returns it in numerical form

	Errors that can be caught:
		<twenty-ninety> <eleven-nineteen>
		<eleven-nineteen> <twenty-ninety>
		<one-nineteen> <one-nineteen>
		<twenty-ninety> <twenty-ninety>
*******************************************************************************/
int wordsToNum(char * numWord);

/*******************************************************************************
	wordsToCurrency()
	Accepts two arguments: the first argument is the number in word form
      (from zero to 1 million) and the second argument is any of the following:
	JPY, PHP, USD. The function returns the number in words to its numerical
	form with a prefix of the currency
*******************************************************************************/
char * wordsToCurrency(char * numWord, char * curr);

/*******************************************************************************
	numberDelimited()
	Accepts three arguments: the first is the number from zero to 1 miliion,
	the second is the delimiter to be used (single character only) and third,
	the number of jumps when the delimiter will appear (from right most going
	to left most digit)
*******************************************************************************/
char * numberDelimited(int num, char delimiter, int jump);
