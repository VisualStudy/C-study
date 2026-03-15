#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
}

int main(void)
{
	int a;
	int b;
	int i;
	int n;

	printf("C언어로 피보나치 수열 구현하기\n");
	printf("재귀문(재귀 함수) 사용 버전\n");
	printf("초기값은 1, 1\n");
	printf("20256121 박지호\n");
	printf("------------------------------------\n");
	printf("몇까지 반복: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		a = fibo(i);
		b = fibo(i + 1);
		
		printf("%d + %d = %d\n", a, b, a + b);
	}

	return 0;
}