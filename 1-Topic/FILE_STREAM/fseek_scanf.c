#include <stdio.h>



int main()
{
    int num1, num2;
    float num3;

    char str[10], oper, ch;

    FILE *fptr;

    fptr = fopen("text2.txt", "w+");

    fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
    fseek(fptr, 2L, SEEK_SET);
    
    fscanf(fptr, "%c\n",&oper);

   printf("%ld\n",ftell(fptr));

    rewind(fptr);

    printf("%c\n", oper);
    fseek(fptr, 9L, SEEK_SET);
    
    fscanf(fptr, "%f\n",&num3);

    printf("%f\n", num3);
   printf("%ld\n",ftell(fptr));

    fclose(fptr);
}
