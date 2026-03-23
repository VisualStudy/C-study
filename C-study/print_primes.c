#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int Prime;
	
	for (i = 2; i <= 10000; i++)
	{
		Prime = 1;

		for (j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				Prime = 0;
				break;
			}
		}

		if (Prime)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}