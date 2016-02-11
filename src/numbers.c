#include "numbers.h"
#define MILLION 0
#define THOUSAND 1
#define HUNDRED 2
#define NUMBER 3
#define NUMBER_TY 4
#define NUMBER_EN 5

// HELPER FUNCTIONS =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
/*******************************************************************************
	printNum()
	A function that prints the equivalent word of a certain number
	from 1-20, 30, 40, 50, 60, 70, 80, 90
*******************************************************************************/
void printNum(int num) {
	switch (num) {
		case 1: printf("one");
			break;
		case 2: printf("two");
			break;
		case 3: printf("three");
			break;
		case 4: printf("four");
			break;
		case 5: printf("five");
			break;
		case 6: printf("six");
			break;
		case 7: printf("seven");
			break;
		case 8: printf("eight");
			break;
		case 9: printf("nine");
			break;
		case 10: printf("ten");
			break;
		case 11: printf("eleven");
			break;
		case 12: printf("twelve");
			break;
		case 13: printf("thirteen");
			break;
		case 14: printf("fourteen");
			break;
		case 15: printf("fifteen");
			break;
		case 16: printf("sixteen");
			break;
		case 17: printf("seventeen");
			break;
		case 18: printf("eighteen");
			break;
		case 19: printf("nineteen");
			break;
		case 20: printf("twenty");
			break;
		case 30: printf("thirty");
			break;
		case 40: printf("forty");
			break;
		case 50: printf("fifty");
			break;
		case 60: printf("sixty");
			break;
		case 70: printf("seventy");
			break;
		case 80: printf("eighty");
			break;
		case 90: printf("ninety");
			break;
	}
}
/*******************************************************************************
	handleHundreds()
	A function that handles the printing of the equivalent word of a number
	from 0-999
*******************************************************************************/
void handleHundreds(int num){
	if(num == 0) return;

	// has hundreds place
	if(num / 100 != 0){
		printNum(num /100);
		printf(" hundred ");
	}
	num %= 100;
	// has tens and ones
	if(num / 10 != 0){
		if(num/10 == 1 || num % 10 == 0)
			printNum(num);
		else{
			printNum(num-(num%10));
			putchar('-');
			printNum(num%10);
		}
		putchar(' ');
	}
	// has ones only
	else{
		printNum(num);
		if(num != 0) putchar(' ');
	}
}
/*******************************************************************************
	getNumber_1_to_9()
	A function that accepts a string and returns its equivalent integer value
	from 1-9
*******************************************************************************/
int getNumber_1_to_9(char * numWord){
	char one[4] = "one";
	char two[4] = "two";
	char three[6] = "three";
	char four[5] = "four";
	char five[5] = "five";
	char six[4] = "six";
	char seven[6] = "seven";
	char eight[6] = "eight";
	char nine[5] = "nine";

	if(strcmp(numWord, one) == 0)
		return 1;
	else if(strcmp(numWord, two) == 0)
		return 2;
	else if(strcmp(numWord, three) == 0)
		return 3;
	else if(strcmp(numWord, four) == 0)
		return 4;
	else if(strcmp(numWord, five) == 0)
		return 5;
	else if(strcmp(numWord, six) == 0)
		return 6;
	else if(strcmp(numWord, seven) == 0)
		return 7;
	else if(strcmp(numWord, eight) == 0)
		return 8;
	else if(strcmp(numWord, nine) == 0)
		return 9;
	return 0;
}
/*******************************************************************************
	getNumber_11_to_19()
	A function that accepts a string and returns its equivalent integer value
	from 11-19
*******************************************************************************/
int getNumber_11_to_19(char * numWord){
	char ten[4] = "ten";
	char eleven[7] = "eleven";
	char twelve[7] = "twelve";
	char thirteen[9] = "thirteen";
	char fourteen[9] = "fourteen";
	char fifteen[8] = "fifteen";
	char sixteen[8] = "sixteen";
	char seventeen[10] = "seventeen";
	char eighteen[9] = "eighteen";
	char nineteen[9] = "nineteen";

	if(strcmp(numWord, ten) == 0)
		return 10;
	else if(strcmp(numWord, eleven) == 0)
		return 11;
	else if(strcmp(numWord, twelve) == 0)
		return 12;
	else if(strcmp(numWord, thirteen) == 0)
		return 13;
	else if(strcmp(numWord, fourteen) == 0)
		return 14;
	else if(strcmp(numWord, fifteen) == 0)
		return 15;
	else if(strcmp(numWord, sixteen) == 0)
		return 16;
	else if(strcmp(numWord, seventeen) == 0)
		return 17;
	else if(strcmp(numWord, eighteen) == 0)
		return 18;
	else if(strcmp(numWord, nineteen) == 0)
		return 19;
	return 0;
}
/*******************************************************************************
	getNumber_20_to_90()
	A function that accepts a string and returns its equivalent integer value
	from 20, 30, 40, 50, 60, 70, 80, 90
*******************************************************************************/
int getNumber_20_to_90(char * numWord){
	char twenty[7] = "twenty";
	char thirty[7] = "thirty";
	char forty[6] = "forty";
	char fifty[6] = "fifty";
	char sixty[6] = "sixty";
	char seventy[8] = "seventy";
	char eighty[7] = "eighty";
	char ninety[7] = "ninety";

	if(strcmp(numWord, twenty) == 0)
		return 20;
	else if(strcmp(numWord, thirty) == 0)
		return 30;
	else if(strcmp(numWord, forty) == 0)
		return 40;
	else if(strcmp(numWord, fifty) == 0)
		return 50;
	else if(strcmp(numWord, sixty) == 0)
		return 60;
	else if(strcmp(numWord, seventy) == 0)
		return 70;
	else if(strcmp(numWord, eighty) == 0)
		return 80;
	else if(strcmp(numWord, ninety) == 0)
		return 90;
	return 0;
}

// MAIN FUNCTIONS =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
/*******************************************************************************
	numToWords()
	A function that prints the equivalent word for a number
	intendedly from 0 - 1000000
*******************************************************************************/
void numToWords(int num) {
	if(num<0){
		printf("Invalid input!\n");
		return;
	}
	if(num == 0){
		puts("zero");
		return;
	}
	// handle millions
	int x = num / 1000000;
	if(x != 0){
		handleHundreds(x);
		printf("million ");
	}
	num %= 1000000;
	// handle thousands
	x = num / 1000;
	if(x != 0){
		handleHundreds(x);
		printf("thousand ");
	}
	num %= 1000;
	// handle hundreds
	handleHundreds(num);
}
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
int wordsToNum(char * numWord) {
	// save copy for errors
	char copy[80], zero[5] = "zero";
	if(strcmp(numWord, zero) == 0) return 0;
	strcpy(copy, numWord);
	// tokenize string by delimiter {space}
	char * token;
	char delimiter[2] = " ";
	token = strtok(numWord, delimiter);
	// accumulators for computation, flag for error detection, strings for comparison
	int acc = 0, holder, carrier = 0, flag[6] = {0,0,0,0,0,0};
	char mil[8] = "million", thou[9] = "thousand", hun[8] = "hundred";

	// loop for traversing all tokens
	while(token != NULL){
		if(
		((holder = getNumber_1_to_9(token)) != 0 && flag[NUMBER] == 0) ||
		((holder = getNumber_11_to_19(token)) != 0 && flag[NUMBER] == 0 && flag[NUMBER_TY] == 0) ||
		((holder = getNumber_20_to_90(token)) != 0 && flag[NUMBER_TY] == 0 && flag[NUMBER_EN] == 0)
		){
			// toggle flags
			if(getNumber_20_to_90(token) != 0)
				flag[NUMBER_TY] = 1;
			else if(getNumber_11_to_19(token) != 0)
				flag[NUMBER_EN] = 1;
			else
				flag[NUMBER] = 1;
			// choose destination
			if(flag[MILLION] != 0 || flag[THOUSAND] != 0)
				carrier += holder;
			else
				acc += holder;
		}
		else if(strcmp(token, mil) == 0){
			flag[NUMBER] = 0; flag[NUMBER_TY] = 0; flag[NUMBER_EN] = 0; flag[MILLION] = 1;
			acc *= 1000000;
		}
		else if(strcmp(token, thou) == 0){
			flag[NUMBER] = 0; flag[NUMBER_TY] = 0; flag[NUMBER_EN] = 0; flag[THOUSAND] = 1;
			acc *= 1000;
		}
		else if(strcmp(token, hun) == 0){
			flag[NUMBER] = 0; flag[NUMBER_TY] = 0; flag[NUMBER_EN] = 0;
			if(flag[MILLION] != 0 || flag[THOUSAND] != 0){
				flag[MILLION] = 0; flag[THOUSAND] = 0;
				acc += (carrier * 100);
				carrier = 0;
			}
			else
				acc *= 100;
		}
		else {
			printf("Error: Invalid input [%s]\n", copy);
			return -1;
		}
		token = strtok(NULL, delimiter);
	}
	return acc + carrier;
}
/*******************************************************************************
	wordsToCurrency()
	Accepts two arguments: the first argument is the number in word form
      (from zero to 1 million) and the second argument is any of the following:
	JPY, PHP, USD. The function returns the number in words to its numerical
	form with a prefix of the currency.
*******************************************************************************/
char * wordsToCurrency(char * numWord, char * curr) {
	// check if currrency valid
	char jpy[4] = "JPY", php[4] = "PHP", usd[4] = "USD";
	if(strcmp(jpy, curr)!=0 && strcmp(php, curr)!=0 && strcmp(usd, curr)!=0){
		printf("Currencry [%s] is invalid\n", curr);
	}
	// check if numWord valid
	int num = wordsToNum(numWord);
	if(num == -1) return NULL;

	char result[80], number[80], *final;
	final = (char *) malloc (12*sizeof(char));
	sprintf(number, "%d", num);
	strcpy(result, curr);
	strcpy(&result[3], number);
	strcpy(final, result);

	return final;
}

void numberDelimited(/* arguments */) {
	/* code */
}
