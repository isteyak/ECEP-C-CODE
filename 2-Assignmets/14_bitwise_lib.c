/*
Title          : Program to write bitwise library
Author         : Isteyak
Organisation   : Emertxe
Algorithm      :
				get_n_bits
				 1.Declaration of variables
				 2.Logic
				  num = num & ~(~0<<n)

			    replace_nbits
                 1. Declaration of variables
                 2.Logic
			     R1 = num & ~0<<n
			     3.Result of num after & with mask
				 R2 = val & ~(~0<<n)
			     4.Result of value after '&' with mask
				 num = R1 | R2

				get_nbits_from_pos
			     1.Declaration of variable
			     2.Logic
				 num = (num & (~(~0<<n)<<pos))>>pos

				replace_nbits_from_pos
				 1.Declaration of variables
				 2.Logic
				  R1 = num & ~(~(~0<<n))<<(pos-n+1)
				 3.Result of num after & with mask
				  R2 = (val & ~(~0<<n))<<(pos-n+1)
				 4.Result of value after '&' with mask
				  num = R1 | R2
				
				toggle_bits_from_pos
	             1.Declaration of variables
	             2.Logic
	             num = num ^ (~(~0<<n)<<pos)

	            print_bits
	            1.Declaration of variables
	            2.Logic
                 unsigned mask = 1 << ((sizeof(int) << 3) - ((sizeof(int) << 3) - n)) - 1
				 for ( ; mask; mask >>= 1)
				 {
					num & mask ? putchar('1') : putchar('0')
				 }

*/

#include <stdio.h>
#include <stdlib.h>

//Prototype
int get_n_bits(void);
int replace_nbits(void);
int get_nbits_from_pos(void);
int replace_nbits_from_pos(void);
int toggle_bits_from_pos(void);
int print_bits();

int main()
{
    //To clear the screen
    system("clear");

    int choice;

    //
    printf("Select bit operation from below list:\n");
    printf("1. get_nbits\n");
    printf("2. replace_nbits\n");
    printf("3. get_nbits_from_pos\n");
    printf("4. replace_nbits_from_pos\n");
    printf("5. toggle_bits_from_pos\n");
    printf("6. print_bits\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    //
    switch (choice)
    {
	case 1:
	    get_n_bits();
	    break;
	case 2:
	    replace_nbits();
	    break;
	case 3:
	    get_nbits_from_pos();
	    break;
	case 4:
	    replace_nbits_from_pos();
	    break;
	case 5:
	    toggle_bits_from_pos();
	    break;
	case 6:
	    print_bits();
	    print_bits();
	    break;
	default:
	    puts("Wrong input.....!!! enter valid input...\n");
	    break;
    }

} 

//called function
int get_n_bits(void)
{

    //Declaration of variables
    int num, n;

    //Prompt the user to enter num value
    printf("Enter num : ");

    //Read num value
    scanf("%d", &num);

    //Prompt the user to Enter the n value
    printf("Enter n : ");

    //Read n value
    scanf("%d", &n);

    //Logic
    num = num & ~(~0<<n);
    // to print the result
    printf("%d\n", num);
}

//called function
int replace_nbits(void)
{

    //Declaration of variables
    int num, n, val, R1=0, R2=0;

    //Prompt the user to enter the value of num
    printf("Enter num : ");
    //Read the value of num
    scanf("%d", &num);

    //Prompt the user to enter the value of n
    printf("Enter n : ");
    //Read the value of n
    scanf("%d", &n);

    //Prompt the user to enter the val value
    printf("Enter val : ");
    //Read value of val
    scanf("%d", &val);

    //Logic
    R1 = num & ~0<<n;
    //Result of num after & with mask
    R2 = val & ~(~0<<n);
    //Result of value after '&' with mask
    num = R1 | R2;
    //print the result
    printf("%d\n", num);
}

//Called function
int get_nbits_from_pos(void)
{

    //Declaration of variable
    int num, n, pos;

    //Prompt the user to enter the num value
    printf("Enter num value : ");
    //Read num value
    scanf("%d", &num);

    //Prompt the user to enter the n value
    printf("Enter n value : ");
    //Read n value
    scanf("%d", &n);

    //Prompt the user to enter the position
    printf("Enter  position : ");
    //Read position value
    scanf("%d", &pos);

    //Logic
    num = (num & (~(~0 << n) << pos -n + 1)) >> pos -n + 1;
    //print the result
    printf("%d\n", num);
}

//Called function
int replace_nbits_from_pos(void)
{
    //Declaration of variables
    int num, n, val, R1=0, R2=0,R3=0, pos;

    //Prompt the user to enter the value of num
    printf("Enter num : ");
    //Read the value of num
    scanf("%d", &num);

    //Prompt the user to enter the value of val
    printf("Enter val : ");
    //Read the value of val
    scanf("%d", &val);

    //Enter the value of n
    printf("Enter  n : ");
    //Read the value of n
    scanf("%d", &n);

    //Prompt the user to enter the val position
    printf("Enter position : ");
    //Read value of pos
    scanf("%d", &pos);

    //Logic
    R1 = num & ~(~(~0 << n)) << (pos - n + 1);
    //Result of num after & with mask
    R2 = (val & ~(~0 << n)) << (pos - n + 1);
    //Result of value after '&' with mask
    num = R1 | R2;
    //print the result
    printf("%d\n", num);

}

//called function
int toggle_bits_from_pos(void)
{
    //Declaration of variables
    int num, n, pos;

    //Prompt the user to enter the num value	
    printf("Enter num : ");
    //Read num value
    scanf("%d", &num);

    //Prompt the user to enter the n value
    printf("Enter n : ");
    //Read the n value
    scanf("%d", &n);

    //Prompt the user to enter the position
    printf("Enter position : ");
    //Read pos value
    scanf("%d", &pos);

    //Logic
    num = num ^ (~(~0 << n) << pos - n);

    printf("%d\n", num);

}

//Called function
int print_bits(void)
{
    int num, n;
    //promt the user to enter the number
    printf("Enter the num : ");

    //read the given number
    scanf("%d", &num);
    //promt the user to enter the number
    printf("Enter n : ");

    //read the given number
    scanf("%d", &n);

    //logic

    //printf("output should be : ");
    unsigned mask = 1 << ((sizeof(int) << 3) - ((sizeof(int) << 3) - n)) - 1;

    for ( ; mask; mask >>= 1)
    {
	num & mask ? putchar('1') : putchar('0');
    }
    //to print the new line
    printf("\n");

}


