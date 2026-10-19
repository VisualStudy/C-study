#include <stdio.h>
#define MAX 10

typedef struct STACK
{
    int stack[MAX];
    int top;
} STACK;

void push(STACK* s, int x)
{
    if (s->top == MAX - 1)
    {
        printf("스택 오버플로");
        
        return;
    }

    s->stack[++s->top] = x;
}

int main(void)
{
    STACK s1;
    s1.top = -1;

    push(&s1, 20);

    printf("%d", s1.stack[s1.top]);

    return 0;
}