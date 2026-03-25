#include <stdio.h>

int main(void)
{
    int i, j;
    int isPrime;

    printf("-------소수(PrimeNumber) 구하기-------\n");
    printf("범위는 1부터 10000까지의 자연수입니다.\n");
    printf("소수란 1과 자기 자신 이외의 나누어 떨어지는 수를 가지지 않는 숫자를 의미합니다.\n");
    printf("-----------------------------------------------\n");

    for (i = 2; i <= 10000; i++)
    {
        isPrime = 1;  

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d는 소수입니다.\n", i);
        }
    }

    return 0;
}