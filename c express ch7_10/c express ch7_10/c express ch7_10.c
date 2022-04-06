#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    float a = 0.0;
    int r = 0;
    int i = 0;
    float result = 1.0;

    printf("실수의 값을 입력하시오: ");
    scanf("%f", &a);
    
    printf("거듭제곱의 횟수를 입력하시오: ");
    scanf("%d", &r);

    for (i = 0; i < r; i++) {
        result *= a;
    }
    printf("%f", result);
}