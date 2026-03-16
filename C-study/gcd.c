#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);

	while (x != y)
	{
		if (x > y)
		{
			printf("x: %d, y: %d\n", x, y);
			x = x - y;
		}
		else
		{
			printf("x: %d, y: %d\n", x, y);
			y = y - x;
		}
		if (x == y)
		{
			break;
		}
	}

	printf("최대공약수: %d\n", x);

	return 0;
}