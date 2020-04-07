/*
Title		:program to find size of datatypes
Author 		:Isteyak
Organsation	:Emertxe
Algoritham	:use the sizeof() operator to know the size of data types in bytes
		 pf("%zu", sizeof(char))
*/

//inclusion of standard library
#include <stdio.h>

int main()
{
    char choice;
do
{
    //logic
    printf("size of char : %zu\n", sizeof(char));
    printf("size of unsigned char : %zu\n", sizeof(unsigned char));
    printf("size of signed char : %zu\n", sizeof(signed char));
    printf("size of int : %zu\n", sizeof(int));
    printf("size of unsigned int : %zu\n", sizeof(unsigned int));
    printf("size of signed int : %zu\n", sizeof(signed int));
    printf("size of long int : %zu\n", sizeof(long int));
    printf("size of short int : %zu\n", sizeof(short int));
    printf("size of float : %zu\n", sizeof(float));
    printf("size of double : %zu\n", sizeof(double));
    printf("size of long double : %zu\n", sizeof(long double));

    printf("enter the choice to repeat : [y/Y] : [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');    
}
