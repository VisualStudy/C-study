#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int i;
	int gcd = 1;
	int lcm;

	printf("두 수를 입력: ");
	scanf("%d %d", &a, &b);
	
	if (a > b)
	{
		c = b;
	}
	else
	{
		c = a;
	}

	for(i = 1; i <= c; i++)
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}

	lcm = (a * b) / gcd;
	printf("최소공배수 %d\n", lcm);


	return 0;
}