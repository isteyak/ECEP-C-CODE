

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

    struct employee *p = &e;


    printf("Enter the name, age, id, salary :");

    scanf("%s%hd%d%f", p->name, &p->age, &p->id, &p->sal);

    printf("name : %s\n age: %hd\n id: %d\n sal : %f\n", p->name, p->age, p->id, p->sal);

}
