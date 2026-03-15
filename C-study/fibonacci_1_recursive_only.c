#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int a, int b, int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        printf("%d + %d = %d\n", a, b, a + b);
        return fibo(b, a + b, n - 1);
    }
}

int main(void)
{
    int n;

    printf("C언어로 피보나치 수열 구현하기\n");
    printf("재귀문(재귀 함수) ONLY 100%% 버전!\n");
    printf("초기값은 1, 1\n");
    printf("20256121 박지호\n");
    printf("------------------------------------\n");

    printf("몇까지 반복: ");
    scanf("%d", &n);

    fibo(1, 1, n);

    return 0;
}