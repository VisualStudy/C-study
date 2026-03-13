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
	printf("몇까지 반복: ");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		printf("%d + %d = %d\n", fibo(i), fibo(i + 1), fibo(i + 2));
	}
	
	return 0;
}