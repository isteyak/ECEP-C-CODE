

#include <stdio.h>
#include <string.h>

int main()
{
   typedef struct employee
    {
	char name[10];
	short age;
	int id;
	float sal;

    }emp_t;

int i;
     emp_t e[2];
     emp_t *p = e;

     for(i = 0; i < 2; i++)
     {
	 printf("enter %d name, age, id, sal : \n", i + 1);

	 
    	scanf("%s%hd%d%f", p[i].name, &p[i].age, &p[i].id, &p[i].sal);
     }


     for(i = 0; i < 2; i++)
     {

     


         printf("name : %s\n age: %hd\n id: %d\n sal : %f\n", p[i].name, p[i].age, p[i].id, p[i].sal);
     }

}
