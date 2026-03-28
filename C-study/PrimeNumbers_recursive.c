#include <stdio.h>

int isPrime(int n, int divisor)
{
    if (n < 2)
    {
        return 0;
    }

    if (divisor == n)
    {
        return 1;
    }

    if (n % divisor == 0)
    {
        return 0;
    }

    return isPrime(n, divisor + 1);
}

void printPrimes(int current, int limit)
{
    if (current > limit)
    {
        return;
    }

    if (isPrime(current, 2))
    {
        printf("%d는 소수입니다.\n", current);
    }

    printPrimes(current + 1, limit);
}

int main(void)
{
    printf("-------소수(PrimeNumber) 구하기-------\n");
    printf("범위는 1부터 10000까지의 자연수입니다.\n");
    printf("소수란 1과 자기 자신 이외의 나누어 떨어지는 수를 가지지 않는 숫자를 의미합니다.\n");
    printf("------------------------------------------------\n");

    printPrimes(2, 10000);

    return 0;
}