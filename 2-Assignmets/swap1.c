/*
Title		:program to swap the two number using bitwise operator
Author		:Isteyak
Organiation	:Emertxe
Algoritham 	:
		1.promt the user to netr the two number
		2.read that given numbere
		3.pass the given number to swap funtion
		4.collect the number address in a pointe and perfrom the logic operation to swap the number
		//logic
 		*a = *a ^ *b;
 		*b = *b ^ *a;
		*a = *a ^ *b;
 */




#include <stdio.h>


//prototyepe of swap funtion
void swap(int *, int *);


int main()
{
    //declaration of variable
    unsigned int a, b;

    //promt the user to netr the number
    printf("enter the number : a and b : ");

    //read the given number
    scanf("%d%d", &a, &b);
    
    //calling swap funtion to swap the number
    swap(&a, &b);

    //print the result 
    printf(" a = %u b =  %d\n", a, b);
}
//definition of swap funtion
void swap(int *a, int *b)
{
    //logic to swap the funtion
    *a = *a ^ *b;

    *b = *b ^ *a;
    *a = *a ^ *b;

}


