/*
Title 			:program to check whether the given number is even or odd using bitwise operator
Author 			:Isteyak
Organisation		:Emertxe
Algoritham		:1. read the number from user
			 2. if(n & 0x80000000 (use this to know whether the number is -ve or not) here we are performing and_bitwise operation with mask hex n				 uber with num)
			 3. if (n & 1) use this to know whether the number is odd or not .. here we are performing and_bitwise operation with 1st bit number a                        
				 that will give you idea about number is odd or not
*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{
    char choice;
do
{
    //declaration of data types
    int n;

    //promt the user to enter the number
    printf("enter the number \n");

    //read the given number
    scanf("%d", &n);

    //logic to check number is -ve or not
    if (n & 0x80000000)
    {
	if (n & 1)//logic to check number is odd or not
	{
	    printf("%d : is -ve odd \n", n);
	}
	else
	    printf("%d : is -ve even\n", n);



    }
    else if(n == 0)
    {
	printf("%d is neutral number\n", n);
    }
     
   else
        if (n & 1)//logic to check number is +ve or not
	{
	    printf("%d : is +ve odd\n", n);
	}
	else
	    printf("%d : is +ve even\n", n);

	    printf("enter the choice to repeat : [y/Y] : not repeat : [n/N] : ");
	    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
return 0;	    
}

