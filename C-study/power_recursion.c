#include <stdio.h>

int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fac(n - 1);
}

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x * power(x, n - 1);
}

int main(void)
{
    int n;
    int sum;
    int pow;
    int num;
    int result;

    n = 0;
    sum = 1;
    pow = 1;
    num = 7;
    result = 1;
    
    printf("횟수 입력: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    
    printf("%d", sum);

    /*for (int i = n; i > 0; i--)
    {
        sum *= i;
    }*/

    for (int i = n; i > 0; i--)
    {
        pow *= n;
    }

    for (int i = 0; i < n; i++)
    {
        result *= num;
    }

    // 출력문 작성

    return 0;
}