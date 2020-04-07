#include <stdio.h>


int main()
{
    struct record
    {
	char name[20];
	int roll;
	float marks;

    }student;

    FILE *fp;
    char grade;
    fp = fopen("stu.dat", "r+");

    if(fp == NULL)
    {
	printf("Error in openig\n");
	return 0;
    }
    printf("\nNAME\t\tmarks\t\tGRADE\n");

    while(fread(&student, sizeof(student), 1, fp) == 1)
    {
	printf("%s\t\t", student.name);
	printf("%2.2f\t\t", student.marks);
	if(student.marks >= 80)
	    printf("A\n");
	    else if(student.marks >= 60)
		printf("B\n");
		else
		    printf("C\n");
    }
    fclose(fp);
}
