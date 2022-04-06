#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int height = 0;
	int a = 0;

	for (;;) {
		printf("막대의 높이(종료 -1): ");
		scanf("%d", &height);

		for (a = 0; a < height; a++) {
			printf("*");
		}
		printf("\n");
		if (height == -1) {
			break;
		}
	}
}