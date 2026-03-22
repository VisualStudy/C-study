#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lcm_recursive(int x, int y, int xx, int yy)
{
    if (x == y)
    {
        printf("두 수의 최소공배수는 %d입니다.", x);
        return;
    }

    if (x < y)
    {
        printf("%d (= %d + %d) \t|  %d \n", x + xx, x, xx, y);
        lcm_recursive(x + xx, y, xx, yy);
    }
    else
    {
        printf("%d \t\t|  %d (= %d + %d) \n", x, y + yy, y, yy);
        lcm_recursive(x, y + yy, xx, yy);
    }
}

int main(void)
{
    int x;
    int y;
    int xx;
    int yy;

    printf("-----------두 수의 최소공배수 구하기------------\n");
    printf("두 수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    xx = x;
    yy = y;

    printf("%d \t\t|  %d \n", x, y);

    lcm_recursive(x, y, xx, yy);

    printf("\n입력한 두 수 %d와 %d의 공배수 중에서 가장 작은 값입니다.", xx, yy);

    return 0;
}