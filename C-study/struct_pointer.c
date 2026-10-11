#include <stdio.h>

typedef struct people {
    int age;
    char name[100];
    char word[100];

} PEOPLE;

int main(void)
{
    PEOPLE person;
    PEOPLE *p = &person;

    (*p).age = 10;

    printf("%d %d\n", (*p).age, person.age);

    return 0;
}