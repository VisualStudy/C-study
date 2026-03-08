#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int i;
	int end;

	printf("몇 번째까지 피보나치 수열 계산? : ");
	scanf("%d", &end);

	num1 = 1;
	num2 = 1;
	num3 = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, num3);

	for (i = 0; i < end; i++)
	{
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		printf("%d + %d = %d\n", num1, num2, num3);
	}

	return 0;
}