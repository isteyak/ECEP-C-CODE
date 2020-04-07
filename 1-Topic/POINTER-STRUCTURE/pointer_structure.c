

#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks;

    int *ptr;
};

int main()
{
    struct student stu, *ptr_stu;
int j = 10;
    ptr_stu = &stu;

    ptr_stu->ptr = &j;

    scanf("%s %d %d", ptr_stu->name, &ptr_stu->rollno, &ptr_stu->marks);
    printf("%s %d %d\n", ptr_stu->name, ptr_stu->rollno, ptr_stu->marks);
printf("%d is j\n", *ptr_stu->ptr);
}
