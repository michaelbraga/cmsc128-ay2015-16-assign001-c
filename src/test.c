#include "numbers.h"
/*
	For testing purposes only
*/

int main(int argc, char const *argv[]) {

	int x = -1;
	char something[80];
	char * token;
	char s[2] = " ";
	char currr[4] = "PHP";
	while (1) {
		fgets(something, 79, stdin);
		something[strlen(something)-1] = '\0';
		printf("===%s\n", wordsToCurrency (something, currr));

	}
	return 0;
}
