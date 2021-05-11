#include <stdio.h>

int main() {
	printf("Hello World!\n");

	char name[100000];

	printf("Whats your name: ");
	scanf("%s", name);

	printf("Fuck you %s\n", name);
	return 0;
}

