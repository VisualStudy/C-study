#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main(void)
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));

    if (head == NULL || second == NULL || third == NULL)
    {
        free(head);
        free(second);
        free(third);

        return 1;
    }

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30; 
    third -> next = NULL;
    
    Node *current = head;

    while (current != NULL)
    {
        printf("%d ", current ->data);
        current = current -> next;
    }

    free(third);
    free(second);
    free(head);

    return 0;
}