#include <stdio.h>

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
    
    printf("%d", n);

    return 0;
}