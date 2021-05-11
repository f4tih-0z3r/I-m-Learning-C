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
			int num1;
			printf("Enter first number:");
			scanf("%d", &num1);

			int num2;
			printf("Enter second number:");
			scanf("%d", &num2);

			int result = num1 + num2;
			printf("\nResult => %d\n\n", result);
		}

		else if (opr == 2) {
			int num1;
			printf("Enter first number:");
			scanf("%d", &num1);

			int num2;
			printf("Enter second number:");
			scanf("%d", &num2);

			int result = num1 - num2;
			printf("\n Result => %d\n\n", result);
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
