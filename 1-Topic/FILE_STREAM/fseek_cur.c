#include <stdio.h>



int main()
{
    int num1, num2;
    float num3;

    char str[10], oper, ch;

    FILE *fptr;

    fptr = fopen("text2.txt", "w+");

    fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
    fseek(fptr, 4L, SEEK_SET);
    
    fscanf(fptr, "%d",&num2);

    fseek(fptr, -3L, SEEK_CUR);
    
    fscanf(fptr, "%c",&oper);

    fseek(fptr, 3L, SEEK_CUR);
    
    fscanf(fptr, "%s", str);
 
    printf("%d %c %s\n", num2, oper, str);
   

    fclose(fptr);
}
