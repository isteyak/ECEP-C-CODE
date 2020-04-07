

#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
	char name[10];
	short age;
	int id;
	float sal;

    };


    struct employee e;

    printf("Enter the name, age, id, salary :");

    scanf("%s%hd%d%f", e.name, &e.age, &e.id, &e.sal);

    printf("name : %s\n age: %hd\n id: %d\n sal : %f", e.name, e.age, e.id, e.sal);

}
