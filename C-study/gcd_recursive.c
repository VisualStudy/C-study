#include <stdio.h>

int gcd(int x, int y)
{
	if (x == y)
	{
		return x;
	}
	else
	{
		if (x > y)
		{
			return gcd(x - y, y);
		}
		else
		{
			return gcd(x, y - x);
		}
	}
}

int main(void)
{
	int x;
	int y;

	printf("두 수 입력: ");
	scanf("%d %d", &x, &y);

	printf("최대공약수: %d\n", gcd(x, y));

	return 0;
}