/*
program   		:program to find size of macro
Author			:isteyak
Organisation		:Emertxe
Algoritham		:
			1.declare the datatypes variable
			2.pass that datatype variable in macro
			3.in macro section read address of datatype variable and increment it by one and substract it by their base address
			4.and finally devide the substracted address by size of char
			5.print that value
*/

//inclusion of standard library
#include <stdio.h>

//logic to get size of dataypes through macro
#define SIZEOF(a) { \
			(char *)(&a + 1) - (char *)(&a);\
}

int main()
{
    //declaration of all required datatypes
    int a = 10;
    double d;
    float f;
    char c;
    unsigned int r;
    long int l;

    //print their size
    printf("size of int : %lu\n", (SIZEOF(a)));
    printf("size of char : %lu\n", (SIZEOF(c))/sizeof(char));
    printf("size of double : %lu\n", (SIZEOF(d))/sizeof(char));
    printf("size of float : %lu\n", (SIZEOF(f))/sizeof(char));
    printf("size of unsigned int : %lu\n", (SIZEOF(r))/sizeof(char));
    printf("size of long int : %lu\n", (SIZEOF(l))/sizeof(char));
return 0;
}
