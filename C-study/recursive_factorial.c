#include <stdio.h>

int facorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * facotrial(n - 1);
}

int main(void)
{
    int num = 5;

    printf("%d! = %d\n", num, facorial(num));

    return 0;
}