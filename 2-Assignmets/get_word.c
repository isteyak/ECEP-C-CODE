/*
Tiltle 		:program to find itoa and atoi and get_word
Author		:Isteyak
Organisation	:Emertxe
Algoritham	:
		1.for get word
		//
		1.1 read the string
		    pass the string to get_word funtion to get length of string
		    store the return value of get_word string
		    print the return legth value of string
		    logic
		    while (*sp)
		    {
		    sp++;
		    i++;
		    }
		    return i;

		    2. for atoi
			//
			2.1 read the string
			    pass the string base adress to atoi funtion
			    //logic to convert string to integer
			    // Iterate through all characters of input string and
			    // update result
			    for (i = 0; str[i] != '\0'; ++i)//loop to itterate till last chacter of string
			    {

			    if(str[i] >= '0' && str [i] <= '9')//logic to get only integer of a string
			    {
			    res = res*10 + str[i] - '0';//logic to get each character of string and convert it to integer

			    }
			    else
			    return res;
		    3. for itoa
		         //
			 3.1 read the string
			     pass the string base address to itoa funtion
			     //logic to convert integer to string
			     while(*n > 0)
			     {
				 *s = *n % 10 + '0';//storing 1-1 digit in string index 
 				 s++;//increment to next string index
 				 *n = *n / 10;//to get the next digit

 			     }
 				 *s = '\0';//lastly store the null character in index



 */
#include <stdio.h>
#include <string.h>

//prototype of all the required funtion
int get_word(char *);
int my_itoa(int *, char *);
void reverse(char s[]);
int myAtoi(char *);

int main()
{
    //declaration of all the variable
    char str[50];
    int option, len, n;
    char choice;

do
{
    //promt the user to choose the ooption
    printf("1. get_word\n2.atoi\n3.itoa\nEnter the option : ");

    //read the given option
    scanf("%d", &option);

    //switch the program acording to option
    switch(option)
    {
	case 1:
	    //promt the user to enter the string
	    printf("enter the string : ");

	    //read the string
	    scanf("%s", str);
	    //call getword funtion
	    len = get_word(str);

	    //print the length
	    printf("%d : is length\n", len);

	    printf("%s : is string\n", str);

	    break;
	case 2:
	    //promt the user to enter the string
	    printf("enter the string : ");
	    //read the string
	    scanf("%s", str);
	    //call myAtoi funtion to convert string to integer
	    len = myAtoi(str);//store the result in variable

	    printf("converted string to integer is : %d\n", len);//print the result
	    break;
	case 3:	
	    //promt the user to enter the number
	    printf("Enter the number : ");
	    //read the given number
	    scanf("%d", &n);
	    //call my_itoa funtion to convert integer to string
	    my_itoa(&n, str);
	    //after converting integer to string result would be in reverse order to make in-order call the reverse funtion.
	    reverse(str);
	    //printing the integer to string value
	    printf("integer to string is : %s\n", str);
	    break;
    }
    printf("choose your option to continue [y/Y] : not continue [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
return 0;
}

//definintion of get_word funtion
int get_word(char *sp)
{
    int i = 0;
    //logic to get length of string
    while (*sp)
    {
	sp++;
	i++;
    }
    return i;
}
//defintion of atoi funtion
int myAtoi(char *str)
{
    int res = 0, i; // Initialize result

    // Iterate through all characters of input string and
    // update result
    for (i = 0; str[i] != '\0'; ++i)
    {

	if(str[i] >= '0' && str [i] <= '9')
	{
	    res = res*10 + str[i] - '0';

	}
	else
	    return res;
    }
    return res;
}
//defintion of itoa funtion    
int my_itoa(int *n, char *s)
{
    int i = 0; 
    //logic
    while(*n > 0)
    {
	*s = *n % 10 + '0';//storing 1-1 digit in string index 
	s++;//increment to next string index
	*n = *n / 10;//to get the next digit

    }
    *s = '\0';//lastly store the null character in index
}

//definition of reverser string funtion
void reverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
	c = s[i];
	s[i] = s[j];
	s[j] = c;
    }
}
