#include <stdio.h>

int main(void)
{
    int arr[3] = {10, 20, 30};

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    arr[1] = 50;

    printf("%d\n", arr[1]);

    return 0;
}