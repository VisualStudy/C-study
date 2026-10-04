#include <stdio.h>

typedef struct
{
    int age;
    char name[100];
} Person;

int main(int argc, char* argv[])
{
    Person person1;
    person1.age = 30;

    printf(person1.name, sizeof(person1.name), "John Doe");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}