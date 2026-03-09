#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 기본적으로 팩토리얼 값은 크므로 long long 데이터 타입 사용이 권장되나 연습용 예제이므로 int형으로 작성하였다.
	int n;
	int result = 1; // 팩토리얼은 곱셈이므로 초기값을 0으로 잡는다면 모든 값은 0으로 수렴할 것이다.
	int i;

	printf("몇 팩토리얼?: ");
	scanf("%d", &n);
	
	for (i = n; i > 0; i--) // 만약 거꾸로 뒤집는다면? i = 1; i <= n; i++
	{
		result *= i;
	}

	printf("결과: %d\n", result);

	return 0;
}