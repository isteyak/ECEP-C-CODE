#include <stdio.h>



int main()
{
    int num1, num2;
    float num3;

    char str[10], oper, ch;

    FILE *fptr;

    fptr = fopen("text2.txt", "w+");

    fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
    fseek(fptr, 0L, SEEK_SET);
    
    fscanf(fptr, "%d %c %d %s %f\n", &num1, &oper, &num2, str, &num3);

    printf("%d %c %d %s %f\n", num1, oper, num2, str, num3);

    fclose(fptr);
}
