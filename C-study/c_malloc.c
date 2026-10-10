#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("failed to allocate memory\n");
        return 1; // exit(1);
    }

    *p = 100;

    printf("value: %d\n", *p);

    free(p); // 메모리 해제

    return 0;
}