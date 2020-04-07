/*
Title 		:program to left shift the binarary value
Auther 		:Isteyak
Organisation	:Emetxe

Algoritham 	:for left shift
                  num = (num << n) | num >> ((sizeof(int) << 3) - n);
		 for right shift	 
                  num = (num >> n) | (num << (sizeof(int) << 3) - n );

*/
//inclusion of standard libarary
#include <stdio.h>


//protypes of calling funtion
int left_cir_shift(int, int);

int right_cir_shift(int, int);

int prints_bits(int);

int main()
{
    //declaration of funtion
    int num, n, choice;
    char option;
do
{
    //promt the user to enter the num
    printf("enter the num\n");

    //read the given number
    scanf("%d", &num);
    //promt the user to enter the n
    printf("enter the n\n");

    //read the given n
    scanf("%d", &n);

    printf("enter your choice\n 1. left circular shift \n 2. right circular shift\n");

    scanf("%d", &choice);
    
    //switch case to choose option for operation
    switch(choice)
    {
	case 1:
                left_cir_shift(num, n);
		break;

	case 2:	
                right_cir_shift(num, n);
		break;
       default:
               printf("enter valid option choice\n");
     }
     printf("enter the choice to repeat [y/Y] [n/N] : ");
     scanf("\n%c", &option);
     
}while (option == 'Y' || option == 'y');


return 0;
}

//definition of calling funtion of left_cir_shift
int left_cir_shift(int num, int n)
{
                printf("binary form of number :  ");
                prints_bits(num);
		printf("after shifting by %d   :  ", n);
                
		//logic to left cir shift
    		num = (num << n) | num >> ((sizeof(int) << 3) - n);
		int num1 = num;
		prints_bits(num1);
}
//definition of right cir shift
int right_cir_shift(int num, int n)
{
                
                printf("binary form of number :  ");
                prints_bits(num);
		printf("after shifting by %d   :  ", n);

                num = (num >> n) | (num << (sizeof(int) << 3) - n );
		int num1 = num;
		prints_bits(num1);

}
//defintion of prints_bits funtion
int prints_bits(int num1)
{   
    //logic
    unsigned mask = 1 << (sizeof(int) << 3) - 1;

    for ( ; mask; mask >>= 1)
    {
	num1 & mask ? putchar('1') : putchar('0');
    }
    //to print the new line
    printf("\n");

}
