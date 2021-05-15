#include <stdio.h>
#include <time.h>

#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define YELLOW	"\x1b[33m"
#define BLUE	"\x1b[34m"
#define MAGENTA	"\x1b[35m"
#define CYAN	"\x1b[36m"
#define RESET	"\x1b[0m"

int main() {
	void delay(int milliSeconds) {
		milliSeconds = milliSeconds * 1000;
		clock_t startTime = clock();

		while (clock() < startTime + milliSeconds) {}
	}

	void swap(int *a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	printf("Hello World!\n");
	delay(1000);

	char name[100000];

	printf("Whats your name: ");
	scanf("%s", name);

	printf("Fuck you %s\n", name);delay(1000);

	int age;

	printf("How old are you: ");
	scanf("%d", &age);

	printf("Fuck you %d times %s\n", age, name);
	delay(1000);

	int x;
	printf("Enter a number for x: ");
	scanf("%d", &x);

	int y;
	printf("Enter a number for y: ");
	scanf("%d", &y);

	swap(&x, &y);

	printf("Now x: %d, y: %d\n", x, y);
	delay(1000);
	printf("And fuck you %s\n", name);

	printf(RED "I'm RED" RESET "\n");
	printf(GREEN "I'm GREEN" RESET "\n");
	printf(YELLOW "I'm YELLOW" RESET "\n");
	printf(BLUE "I'm BLUE" RESET "\n");
	printf(MAGENTA "I'm MAGENTA" RESET "\n");
	printf(CYAN "I'm CYAN" RESET "\n");

	printf(RED "I" GREEN "'" YELLOW "m" BLUE " G" MAGENTA "A" CYAN "Y" RESET "\n");
	
	return 0;
}

