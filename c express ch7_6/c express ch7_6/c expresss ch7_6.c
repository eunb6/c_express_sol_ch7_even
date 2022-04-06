#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char op;
	int num2 = 0;
	int num1 = 0;
	int sum = 0;
	
		printf("*****************\n");
		printf("A--- Add\n");
		printf("S--- Subtract\n");
		printf("M--- Multiply\n");
		printf("D--- DIvide\n");
		printf("Q--- Quit\n");
		printf("*****************\n");
	do {
		printf("연산을 선택하시오:");
		scanf("%c", &op);

		if (op == 'A') {
			printf("두 수를 공백으로 분리하시오: ");
			scanf("%d %d", &num1, &num2);
			sum = num1 + num2;
			printf("%d\n", sum);
		}
		if (op == 'Q') {

			break;
		}
	}while (op);
}