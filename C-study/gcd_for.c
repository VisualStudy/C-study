#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int xx;
	int yy;

	printf("-----------두 수의 최대공약수 구하기------------\n");
	printf("두 수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	xx = x;
	yy = y;

	printf("%d \t\t|  %d \n", xx, yy);

	while(x != y)
	{
		if(x > y)
		{
			x = x - y;
			printf("%d (= %d - %d) \t|  %d \n", x, x + y, y, y);
		}
		else
		{
			y = y- x;
			printf("%d \t\t|  %d (= %d - %d) \n", x, y, y + x, x);
		}
		if(x == y)
		{
			break;
		}
	}
	
	printf("두 수의 최대공약수는 %d입니다.", x);
	printf("\n입력한 두 수 %d와 %d를 나누는 수 중에서 가장 큰 값입니다.", xx, yy);


	return 0;
}