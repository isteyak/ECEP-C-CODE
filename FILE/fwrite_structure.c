#include <stdio.h>


struct record
{
    char name[20];
    int roll;
    float marks;
}student;

int main()
{
    int i,n;

    FILE *fp;

    fp = fopen("stu.dat", "w+");

    if(fp == NULL)
    {
	printf("Error in  opening file\n");
	exit(1);
    }

    printf("ENter number of rcords");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
	printf("enter name :");
	scanf("%s", student.name);
	printf("Enter roll :");
	scanf("%d", &student.roll);
	printf("enteer marks :");
	scanf("%f", &student.marks);
	fwrite(&student, sizeof(student), 1, fp);
    }
    fclose(fp);
}
