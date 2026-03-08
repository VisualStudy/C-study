#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1부터 n까지 합 구하기
int main(void)
{
	// 기억해야 할 값
	int sum;
	int i;
	int n;

	// 초기 상태
	sum = 0;
	
	printf("몇까지 더할까? (정수): ");
	scanf("%d", &n);

	for (i = 1; i < n + 1; i++)
	{
		sum = sum + i;
	}

	printf("합 = %d\n", sum);

	return 0;
}