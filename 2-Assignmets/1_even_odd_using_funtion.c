
/*

Title 		:Program to find even and odd number
Auther 		:Isteyak
Organisation    :Emertxe

Algoritham 	:pf(to enter the the number)
		 read the given number
		 if (num > 0)
		 {
		     pf(is +ve)
		 }
		 if (number % 2 == 0)
		 {
		     pf(it is even)
		 }
		 else
		     pf(odd)

*/

//inclusion of standard libarary
#include <stdio.h>

//declaration of macro
#define num_positive 1
#define num_negative -1
#define neutral_num 0
#define num_even 2
#define num_odd -2

//prototypes of positive number funtion
int num_is_positive(int);
//prototypes of even number funtion
int num_is_even(int);

int main()
{   
    //declarartion of variable
    int num;
    char choice;
do
{
    //promt the user to enter the number
    printf("enter the number\n");

    //read the guven number
    scanf("%d", &num);

    //logic
    if (num_is_positive(num) == num_positive)
    {
	if (num_is_even(num) == num_even)
	{
	    printf("%d : is +ve even\n", num);
	}
	else
	    printf("%d : is +ve odd\n", num);
    }
    else if (num_is_positive(num) == num_negative)
    {
	if (num_is_even(num) == num_even)
	{

	    printf("%d : is -ve even\n", num);
	}
	else
	    printf("%d : is -ve odd\n", num);


    }
    else
    {
	printf("%d : is nutral\n", num);
    }
    printf("Enter your choice to repeat : [y/Y] or not [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'Y' || choice == 'y');

}
//definition of calling funtion of +ve number
int num_is_positive(int num)
{
    if (num > 0)//logic to check whether the given number is +ve or not
    {
	return num_positive;
    }
    else if (num < 0)
    {
	return num_negative;
    }
    else
	return neutral_num;
}

//definition of calling funtion of even number
int num_is_even(int num)
{
    if (num % 2 == 0)//logic to check whether the given number is even or odd
    {
	return num_even;
    }
    else
	return num_odd;
}


