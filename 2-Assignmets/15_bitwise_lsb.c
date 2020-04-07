/*
Title 		:program to find binarary shift
Auther 		:Isteyak
Organisation	:Emertxe

Algoritham	:     1. read the value of i n a and b from user
		      2. pass that value to bit_operation funtion 
		      3. perform the operation using required logic
		      //logic
		      c = b - a + 1;  (c is dec value to shift the binarary)
    
                      n = (n & ~(~0<<c))<<a; (here n is number and we are deleting the occurance of first bits till a(a is position)                                              
    
                      i = i & ~((~(~0<<c))<<a);(i is value to cut the bits of given position)
      
                      bit = i | n;(here in bit we are pesting the bits of i in n)
*/

//inclusion of standard libabary
#include <stdio.h>

//prototypes of funtion
int bit_operation(int, int, int, int);
int prints_bits(int);

int main()
{
    char choice;
do
{
    //declaration of variables
    int i, n, a, b, result;

    //promt the user to enter the n value
    printf("enter the n vlue\n");

    //read the given n value
    scanf("%d", &n);

    //promt the user to enter the i value
    printf("enter the i vlue\n");

    //read the given a value
    scanf("%d", &i);

    //promt the user to enter the a value
    printf("enter the a vlue\n");

    //read the given a value
    scanf("%d", &a);

    //promt the user to enter the b value
    printf("enter the b vlue\n");

    //read the given b value
    scanf("%d", &b);
    
    //logic if a is greter than 30 it would be invalid
    if (a > 30)
    {
	printf("INVALID INPUT\n");
    }
    //logic a should not be greter than b 
    else if (a > b > 31)
    {
	printf("INVALID INPUT\n");
    }
    else
	printf("the binary form of n     : ");
	prints_bits(n);
	printf("the binary form of i     : ");
	prints_bits(i);

         //here in result variable we are storing the return vlue of calling funtion
	 result = bit_operation(n, i, a, b);
	printf("the binary form of new i : ");
	prints_bits(result);
        
	//printing the result
	printf("new i = %d\n", result);

	printf("enter the choice to repeat : [y/Y] : not repeat : [n/N] : ");
	scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');   

}
//definition of calling funtion
int bit_operation(int n, int i, int a, int b)
{


    /*
    logic
    int v1, v2, v3, num;

    v1 = n & ~(~0 << a);

    printf("v1 = %d\n", v1);

    v2 = v1 << a;
    printf("v2 =  %d\n", v2);

//    v3 = i & (~(~(~0 << a) << (b - a)));
     
     v3 = i & ~((~(~0 << a)) <<  a);
    
    printf("v3 = %d\n", v3);

    num = v3 | v2;
    */

  //decalration of variable types
  int bit, c;
  //logic
  c = b - a + 1;

  n = (n & ~(~0<<c))<<a;

  i = i & ~((~(~0<<c))<<a);
  
   bit = i | n;

    return bit;

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









