#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int j;
	int k;

	for (i = 0; i < 7; i++) {
		for (k = 0; k < 6-i; k++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
	printf("\n");
	}
	return 0;
}