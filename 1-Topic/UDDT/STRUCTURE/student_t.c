#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char *name;
    int id;
    int marks[3];
    float avg;
    char grades;
}student_t;

void populate(student_t *, int);
void print_details(student_t *p, int n);
void find_avg_grades(student_t *, int);
int main()
{
    int n;

    printf("enter the n value : ");

    scanf("%d", &n);

    student_t  *p = malloc(n * sizeof(student_t));

    if(!p)
    {
	perror("malloc");

	exit(1);
    }

    populate(p, n);

    find_avg_grades(p, n);
  print_details(p, n);
    
}

void populate(student_t *p, int n)
{
    char buffer[10] = {'\0'};
    int i, j, len;

    for(i = 0; i < n; i++)
    {

	printf("Enter name for %d student : ", i + 1);

	scanf("%s", buffer);

	len = strlen(buffer);

	p[i].name = malloc(len + 1);

	strcpy(p[i].name, buffer);
	
	printf("Enter id for %d student : ", i + 1);

	scanf("%d", &(p[i].id));

	printf("Enter the mark for student : ");

	for(j = 0; j < 3; j++)
	{
	    scanf("%d", &(p[i].marks[j]));
	}

    }

}
void find_avg_grades(student_t *p, int n)
{
    int i, j, sum = 0;

    float per;

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < 3; j++)
	{
	    sum += p[i].marks[j];
	}

	p[i].avg =  (float)sum / 3.0;

	per = (p[i].avg / 100.0) * 100;


	if(per >= 50 && per < 60)
	{
	    p[i].grades = 'C';
	}
	else if(per >= 60 && per < 70)
	{
	    p[i].grades = 'B';
	}
	else if(per >= 70 && per < 100)
	{
	    p[i].grades = 'A';

	}
	else
	{
	    p[i].grades = 'D';
        }

	sum = 0;
    }
}

void print_details(student_t *p, int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
	printf("Name of the %d student : %s\n", i + 1, p[i].name);

	printf("Id of the %d student : %d\n", i + 1, p[i].id);
	for(j = 0; j < 3; j++)
	{
	    printf("marsk of %d student : %d\n", i + 1, p[i].marks[j]);
	}

	printf("Avg of %d student is : %f\n", i + 1, p[i].avg);

	printf("Grades of %d student is : %c\n", i + 1, p[i].grades);
    }
}
