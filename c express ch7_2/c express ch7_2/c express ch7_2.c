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
	printf("1���� 100 ������ ������ ���� %d�Դϴ�.", sum);
	return 0;
}