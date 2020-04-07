#include <stdio.h>


int main()
{
    int num1, num2, num3, num4;
    FILE *fptr;

    fptr = fopen("text4.txt", "w+");



    scanf("%x%x", &num1, &num2);

    fwrite(&num1, sizeof(num1), 1, fptr);
    fwrite(&num2, sizeof(num2), 1, fptr);

    rewind(fptr);
    fread(&num3, sizeof(num1), 1, fptr);
    fread(&num4, sizeof(num2), 1, fptr);

    printf("%d %d\n", num3, num4);

    fclose(fptr);
}
