#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 0;
	int i;

	for (i = 1; i < 101; i++) {
		if (i % 3 == 0)
			sum += i;
		else
			i += 1;
	}
	printf("1부터 100 사이의 정수의 합은 %d입니다.", sum);
	return 0;
}