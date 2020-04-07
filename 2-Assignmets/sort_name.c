/*
Title		:program to sort the name
Author		: Isteyak ansari
Organisation	:EMertxe
Algoritham	:
		1.promt the user to entr the string 
		2.create array pointer memory row wise to store the col string
		3.create array_poniter memory to store the string array col wise
		4.check the first string character between 2 consequtive string if string 1 1st character is greter than string2 then exchnge their address in row pointer_array
		5.continue 4 step till the right order
 */


//inclusion os standard library
#include <stdio.h>
#include <stdlib.h>

//prototype of funtion
void reoder(char **, int n);

void print_order(char **, int n);

int main()
{
    //variable declaration
    int i, n = 0;

    //promt the user to enter the string
    printf("Enter no. of string : ");

    //reda the n value
    scanf("%d", &n);

    printf("\n");

    //create memory dynamically for storing the string address
    char **x = malloc(n*sizeof(char *));

    //loop to create col memory to store the string (for each row address)
    for (i = 0; i < n; i++)
    {
	printf("[%d] ->  : ", i + 1);

	x[i] = (char *)malloc(32*sizeof(char));//creating memory for each row address to store the string

	scanf("%s", x[i]);//reading the string 
    }

    reoder(x, n);//function calling to reoder the string 

    print_order(x, n);//printing the reoderes string
}

//defintion of print funtion
void print_order(char *x[], int n)
{
    int i;//dclaration of avriable

    printf("\nreoder list is : \n\n");

    for (i = 0; i < n; i++)
    {
	printf("[%d]  -> : %s\n", i+1, x[i]);
    }
}

//defintion of reoder funtion to sort the string
void reoder(char *x[], int n)
{
    int i = 0, j;//declaration of variable

    char *temp;//declaration of temporary pointer variable to store the address of string

    //logic to sort the string
    for (j = 0; j < n; j++)
    {
	for(i = 0; i < n - 1; i++)
	{
	    if(strcmp(x[i], x[i + 1]) > 0)//if 1st string  is grater than 2nd string  then exchange their addresss in row 
	    {
		temp = x[i];
		x[i]  = x[i+1];
		x[i+1] = temp;
	    }
	}
    }
}
