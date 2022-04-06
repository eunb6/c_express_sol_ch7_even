#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 1;
	int c;
	int i = 0;

	int input = 0;

	printf("몇번째 항까지 구할까요? : ");
	scanf("%d", &input);

	printf("%d,", a);
	printf("%d,", b);

	for (i = 0; i < input -1; i++) {
		c = (a + b);
		a = b;
		b = c;
		printf("%d,", c);
	}
	//printf("%d, %d, %d", a, b, c);
}