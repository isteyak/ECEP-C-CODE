#include <stdio.h>

int main()
{
    struct student
    {
	char name[20];
	int roll;
	float marks;
    }student;

    FILE *fp;

    char name[20];
    unsigned flag = 0;
    long size = sizeof(student);
    fp = fopen("stu.dat", "r+");

    if(fp == NULL)
    {
	printf("ERROR in file openig\n");
	return 0;
    }
    printf("Enter nme of student whose name is to be modify");

    scanf("%s", name);
    while(fread(&student, sizeof(student), 1, fp) == 1)
    {
	if(strcmp(student.name, name) == 0)
	{
	    printf("Enter new data -->\n");
	    printf("Enter name :  ");
	    scanf("%s", student.name);
	    printf("Enter a roll no : ");
	    scanf("%d", &student.roll);
	    printf("Enter marks :  ");
	    scanf("%f", &student.marks);
	    fseek(fp, -size, 1);
	    fwrite(&student, sizeof(student), 1, fp);
	    flag = 1;
	    break;
	}
    }
    if(flag == 0)
	printf("Name not found in file\n");
	else
	    printf("Record modified....\n");
	    fclose(fp);
}
