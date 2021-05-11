#include <stdio.h>
#include <time.h>

int main() {
	void delay(int milliSeconds) {
		milliSeconds = milliSeconds * 1000;
		clock_t startTime = clock();

		while (clock() < startTime + milliSeconds) {}
	}

	printf("Hello World!\n");
	delay(1000);

	char name[100000];

	printf("Whats your name: ");
	scanf("%s", name);

	printf("Fuck you %s\n", name);
	delay(1000);

	int age;

	printf("How old are you: ");
	scanf("%d", &age);

	printf("Fuck you %d times %s\n", age, name);
	delay(1000);
	
	return 0;
}

