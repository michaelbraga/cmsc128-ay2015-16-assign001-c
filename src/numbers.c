#include "numbers.h"


// Helper functions =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
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

void handleHundreds(int num){
	if(num == 0)
		return;

	/* has hundreds place */
	if(num / 100 != 0){
		printNum(num /100);
		printf(" hundred ");
	}
	num %= 100;

	/* for tens and ones place */
	if(num / 10 != 0){
		if(num/10 == 1 || num % 10 == 0){
			printNum(num);
		}
		else{
			printNum(num-(num%10));
			putchar('-');
			printNum(num%10);
		}
		putchar(' ');
	}
	else{
		printNum(num);
		
		if(num != 0)
			putchar(' ');
	}
}


// Main functions =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void numToWords(int num) {
	if(num == 0){
		puts("zero");
		return;
	}

	int x; // will be used for storage

	/* handle millions */
	x = num / 1000000;
	if(x != 0){
		handleHundreds(x);
		printf("million ");
	}
	num %= 1000000;

	/* handle thousands */
	x = num / 1000;
	if(x != 0){
		handleHundreds(x);
		printf("thousand ");
	}
	num %= 1000;

	/* handle hundreds */
	handleHundreds(num);

}

int wordsToNum(/* arguments */) {
	/* code */
	return 0;
}

char * wordsToCurrency(/* arguments */) {
	/* code */
	char * s;
	return s;
}

void numberDelimited(/* arguments */) {
	/* code */
}
