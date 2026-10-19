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
        printf("스택 오버플로\n");
        
        return;
    }

    s->stack[++s->top] = x;
}

int pop(STACK *s)
{
    if (s->top == -1)
    {
        printf("스택 언더플로\n");
        
        return -1;
    }

    return s->stack[s->top--];
}

int peek(STACK* s)
{
    if (s->top == -1)
    {
        printf("빈 스택\n");
        return -1;
    }

    return s->stack[s->top];
}

int is_full(STACK* s)
{
    return s->top == MAX - 1;
}

int is_empty(STACK* s)
{
    return s->top == -1;
}

int main(void)
{
    STACK s1;
    s1.top = -1;

    push(&s1, 20);

    printf("%d", s1.stack[s1.top]);

    return 0;
}