#include <stdio.h>

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int num[3] = {10, 20, 30};

    PrintArray(num, 3);

    return 0;
}