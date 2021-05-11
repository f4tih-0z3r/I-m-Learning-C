#include <stdio.h>

int main() {
	printf("Hello World!\n");

	char name[100000];

	printf("Whats your name: ");
	scanf("%s", name);

	printf("Fuck you %s\n", name);

	int age;

	printf("How old are you: ");
	scanf("%d", &age);

	printf("Fuck you %d times %s\n", age, name);
	
	return 0;
}

