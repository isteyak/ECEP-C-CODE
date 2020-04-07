#include <stdio.h>



int main()
{
    int num1, num2;
    float num3;

    char str[10], oper, ch;

    FILE *fptr;

    fptr = fopen("text2.txt", "w+");

    fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
    fseek(fptr, -10L, SEEK_END);
    fscanf(fptr, "%f", &num3);
 
    fseek(fptr, -15L, SEEK_END);
    fscanf(fptr, "%d", &num2);
    printf("%f  %d\n", num3, num2);
   

    fclose(fptr);
}
