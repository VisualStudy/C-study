#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i;
	printf("값 입력: ");
	scanf("%d", &n);

	printf("약수는 ");

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	
	printf("이다.\n");

	return 0;
}