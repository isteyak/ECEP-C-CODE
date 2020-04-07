

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

    e.id = 1021;

    e.age = 23;
    e.sal = 15000.00;

    strcpy(e.name, "raam");

    printf("name %s \n", e.name);

}
