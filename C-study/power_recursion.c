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

    n = 0;
    sum = 1;
    
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



    return 0;
}