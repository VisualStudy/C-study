#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 3의 배수를 더해 가는 프로그램 작성해보기

	int n;
	int i;
	int sum;
	sum = 0;

	printf("얼마까지 더할까?: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
	}

	printf("다 더한 값은 %d구나!\n", sum);

	return 0;
}