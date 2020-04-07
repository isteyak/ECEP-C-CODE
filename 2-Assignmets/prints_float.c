/*


Title 		:proram to find binary value of float number
Auther		:Isteyak
Organisation	:Emertxe

Algoritham	:1.read the float number from user
  		 2.pass that float num in prints_bits funtion
		 3.logic to print each bit of num
		 (create a mask using unsigned mask datatype like mask = 1 and shift this value at last position of binaray int bit,
		   by using right shift 31 times and, then perform and bitwise operation and get the result and print that value, continue this process
		   til last lsb bit)
		 //logic

    		 int *p = (int *)&num;//here storing the num address in pointer and doing type casting 
		 unsigned mask = 1 << (sizeof(int) << 3) - 1;shift the 1 bit at last position 32
      
                 for ( ; mask; mask >>= 1) //shift the maask by 1 right side in each itteration till last postion
                 {   
                     *p & mask ? putchar('1') : putchar('0');//perform and_bitwise opration and get the result and print it
	         }


*/
//inclusion of standard libarary
#include <stdio.h>

//declaration of funtion
int prints_bits(float);
int prints_bits1(double);

int main()
{  
    //declaration of variable
    float num;
    double num1;
    int n;

    printf("choice option \n 1. float printf \n 2. double float\n");

    printf("enter option : ");


    scanf("%d", &n);

    switch (n)
    {
	case 1: 
    		printf("Enter the number\n");
    
    		//read the given number
    		scanf("%f", &num);

		
     		prints_bits(num);
		break;

	case 2:	
    		printf("Enter the number\n");
    
    		//read the given number
    		scanf("%lf", &num1);

		
     		prints_bits1(num1);
		break;
 	

    }


/*
    //promt the user to enter the number
    printf("Enter the number\n");
    
    //read the given number
    scanf("%f", &num);
     
     //promt the numeber
     printf("%.2f  ->   ", num);

     //calling of funtion
     prints_bits(num);
    
     //conver the number in -ve form
     num = -num;

     printf("%.2f ->   ", num);
     
     //calling of funtion
     prints_bits(num);
     */

    return 0;
}
//funtion defintion
int prints_bits(float num)
{
    int *p = (int *)&num;//here storing the passed value address in a pointer and doing type casting expicitly to make same data types
    //logic
    printf("\tsign\tmantisa\t\texponent\n\t\t");
    //unsigned mask = 1 << (sizeof(float) << 3) - 1;
    unsigned mask = 1 << (sizeof(float) * 8) - 1;

    for ( ; mask; mask >>= 1)
    {
	if (mask == 0x40000000)
	{
	    printf("\t");
      *p & mask ? putchar('1') : putchar('0');
	}
	else if (mask == 0x00800000)
	{
	    printf("\t\t");
      *p & mask ? putchar('1') : putchar('0');

	}
	else
      *p & mask ? putchar('1') : putchar('0');

    }
    //to print the new line
    printf("\n");

}




int prints_bits1(double num)
{
    long *p = (long *)&num;//here storing the passed value address in a pointer and doing type casting expicitly to make same data types
    //logic
    printf("sign\tmantisa\t\t\t\texponent\n");
    //unsigned mask = 1 << (sizeof(float) << 3) - 1;
     unsigned long mask = 1UL << (sizeof(int) << 4) - 1;

    for ( ; mask; mask >>= 1)
    {
	if (mask == 0x4000000000000000)
	{
	    printf("\t");
      *p & mask ? putchar('1') : putchar('0');
	}
	else if (mask == 0x000008000000000)
	{
	    printf("\t\t");
      *p & mask ? putchar('1') : putchar('0');

	}
	else
      *p & mask ? putchar('1') : putchar('0');

    }
    //to print the new line
    printf("\n");

}
