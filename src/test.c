#include "numbers.h"
/*
	For testing purposes only
*/
int getInput(){
	int x;
	printf("\n[1] - Numbers to words\n");
	printf("[2] - Words to numbers\n");
	printf("[3] - words + currency\n");
	printf("[4] - number delimited\n");
	printf("\nInput:");
	scanf("%d", &x);
	getchar();
	return x;
}

int main(int argc, char const *argv[]) {

	int choice=1;
	char * answer;
	char ans[80], curr[5];
	int number, jump;
	while(1){
		choice = getInput();
		switch(choice){
			case 1: 	printf("Gimme num:");
					scanf("%d", &number);
					getchar();
					printf("=> ");
					numToWords(number);
					putchar('\n');
					break;

			case 2: 	printf("Gimme words:");
					fgets(ans, 80, stdin);
					ans[strlen(ans)-1] = '\0';
					printf("=> %d\n", wordsToNum(ans));
					break;
			case 3: 	printf("Gimme words:");
					fgets(ans, 80, stdin);
					ans[strlen(ans)-1] = '\0';
					printf("Gimme curr:");
					fgets(curr, 5, stdin);
					curr[strlen(curr)-1] = '\0';
					printf("=> %s\n", wordsToCurrency(ans, curr));
					break;
			case 4: 	printf("Gimme num:");
					scanf("%d", &number);
					getchar();
					printf("Gimme delimiter:");
					scanf("%c", &curr[0]);
					getchar();
					printf("Gimme jump:");
					scanf("%d", &jump);
					getchar();
					printf("=> %s\n", numberDelimited(number, curr[0], jump));
					break;
			default: printf("Bye\n");
		}
	}



	return 0;
}
