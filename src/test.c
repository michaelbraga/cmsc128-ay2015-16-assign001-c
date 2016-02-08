#include "numbers.h"
/*
	For testing purposes only
*/
int main(int argc, char const *argv[]) {

	int x = -1;
	do {
		scanf("%d", &x);
		numToWords(x);
		putchar('\n');
	} while(x!=-1);

	return 0;
}
