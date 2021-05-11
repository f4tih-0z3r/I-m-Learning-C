#include <stdio.h>

int main() {
	while (1) {
		printf("1)Addition\n");
		printf("2)Subtraction\n");
		printf("3)Multiplication\n");
		printf("4)Division\n");

		printf("\n5)Exit\n");

		int opr;
		printf("\n:");
		scanf("%d", &opr);

		if (opr == 1) {
			printf("Addition\n");
		}

		else if (opr == 2) {
			printf("Subtraction\n");
		}

		else if (opr == 3) {
			printf("Multiplication\n");
		}

		else if (opr == 4) {
			printf("Division\n");
		}

		else if (opr == 5) {
			break;
		}
	}
}
