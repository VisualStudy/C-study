#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int i;
	int gcd = 1;
	
	printf("최대공약수를 구하자\n");
	printf("첫 번째 값을 입력: ");
	scanf("%d", &a);
	printf("두 번째 값을 입력: ");
	scanf("%d", &b);
	// 혹은 두 숫자를 scanf("%d %d", &a, &b);의 형태로 한 번에 입력 받을 수도 있다.

	if (a > b)
	{
		c = b;
	}
	else
	{
		c = a;
	}

	for (i = 1; i <= c; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}

	printf("최대공약수: %d\n", gcd);

	return 0;
}