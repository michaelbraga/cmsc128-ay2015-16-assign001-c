#include "numbers.h"

int main(int argc, char const *argv[]) {
	
	int x = -1;
	do {
		scanf("%d", &x);
		printNum(x);
		putchar('\n');
	} while(x!=-1);

	return 0;
}
