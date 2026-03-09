#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i;

	printf("숫자 입력: ");
	scanf("%d", &n);

	if (n < 2)
	{
		printf("애초에 이건 소수 판별이 안 됩니다. 즉, 소수가 아닙니다.");

		return 0;
	}

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("소수가 아니다! 비상!\n");

			return 0;
		}
	}

	printf("소수구나! 너!\n");

	return 0;
}