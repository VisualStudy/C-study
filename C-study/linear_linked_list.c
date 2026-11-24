#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *head;
} Node;

int main(void)
{
    Node n1 = {10, NULL};
    Node n2 = {20, NULL};
    Node n3 = {30, NULL};

    n1.head = &n2;
    n2.head = &n3;

    Node *first = &n1;

    while (first != NULL)
    {
        printf("%d\n", first->data);
        first = first->head;
    }
    
    return 0;
}