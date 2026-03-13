#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int i;
	int n;

	a = 1;
	b = 1;
	c = a + b;
	printf("몇까지 반복: ");
	scanf("%d", &n);
	printf("%d + %d = %d\n", a, b, c);

	for (i = 1; i <= n; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%d + %d = %d\n", a, b, c);
	}


	return 0;
}