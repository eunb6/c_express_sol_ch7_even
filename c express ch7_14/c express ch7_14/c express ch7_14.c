#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;
	int i = 0;
	int result = 0;
	int count = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &input);
	
	while (input != 0) {
		count++;
		for (i = 0; i < count; i++) {
			result = input % 10;
			input /= 10;
			printf("%d", result);
		}
	}
}