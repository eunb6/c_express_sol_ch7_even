#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    float a = 0.0;
    int r = 0;
    int i = 0;
    float result = 1.0;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%f", &a);
    
    printf("�ŵ������� Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &r);

    for (i = 0; i < r; i++) {
        result *= a;
    }
    printf("%f", result);
}