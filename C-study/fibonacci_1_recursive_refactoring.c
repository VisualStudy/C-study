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