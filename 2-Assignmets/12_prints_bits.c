/*

Title 		:proram to find binary value of decimal number
Auther		:Isteyak
Organisation	:Emertxe

Algoritham	:1.read the number from user
  		 2.pass that num in prints_bits funtion
		 3.logic to print each bit of num
		 (create a mask using unsigned mask datatype like mask = 1 and shift this value at last position of binaray int bit,
		   by using right shift 31 times and, then perform and bitwise operation and get the result and print that value, continue this process
		   til last lsb bit)
		 //logic
		 unsigned mask = 1 << (sizeof(int) << 3) - 1;shift the 1 bit at last position 32
      
                 for ( ; mask; mask >>= 1) //shift the maask by 1 right side in each itteration till last postion
                 {   
                     num & mask ? putchar('1') : putchar('0');//perform and_bitwise opration and get the result and print it
	         }


*/
//inclusion of standard libarary
#include <stdio.h>

//declaration of funtion
int prints_bits(int);

int main()
{  
    //declaration of variable
    int num;

    //promt the user to enter the number
    printf("Enter the number\n");
    
    //read the given number
    scanf("%d", &num);
     
     //promt the numeber
     printf("%d  ->     ", num);

     //calling of funtion
     prints_bits(num);
    
     //conver the number in -ve form
     num = -num;

     printf("%d ->     ", num);
     
     //calling of funtion
     prints_bits(num);

    return 0;
}
//funtion defintion
int prints_bits(int num)
{   
    //logic
    unsigned mask = 1 << (sizeof(int) << 3) - 1;

    for ( ; mask; mask >>= 1)
    {
	num & mask ? putchar('1') : putchar('0');
    }
    //to print the new line
    printf("\n");

}



