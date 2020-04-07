#include <stdio.h>



struct record
{
    char name[20];
    int roll;
    float marks;
}student;

int main()
{
    FILE *fp;
    fp = fopen("stu.dat", "r+");

    if(fp == NULL)
    {
	printf("Error in file openig\n");
	return 1;
    }
    printf("\nName\troll no\tmarks\n");
    while(fread(&student, sizeof(student), 1, fp)==1)
    {
	printf("%s\t", student.name);
	printf("%d\t", student.roll);
	printf("%f\n", student.marks);
    }
    fclose(fp);
}
