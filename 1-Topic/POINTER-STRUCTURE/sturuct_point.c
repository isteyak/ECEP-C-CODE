#include <stdio.h>

struct student
{
    char name[10];
    int rollno;
    int marks;
};

void dispaly(struct student *);
int inc_marks(struct student *);

int main()
{
    struct student stu1 = { "john", 12, 87};
    struct student stu2 = { "marry", 18, 90};

    inc_marks(&stu1);
    inc_marks(&stu2);

    dispaly(&stu1);
    dispaly(&stu2);
}
int inc_marks(struct student *stuptr)
{
    (stuptr->marks)++;
}
void dispaly(struct student *stuptr)
{
    printf("name - %s\t", stuptr->name);
    printf("rollno - %d\t", stuptr->rollno);
    printf("marks - %d\n", stuptr->marks);
}

