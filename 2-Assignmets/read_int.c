/*
title		:c program to read the integer without using scanf funtion
Author		:Isteyak
Organisation	:Emertxe
Algoritham	:
		1.promt the user to enter the string through puts funtion
		2.call the read_int funtion and store the return value in any variable
		3.in read funtion use getchar() funtion to read the character given by user
		4.logic
                //run the while loop till the last charcter in the buffer!
		while (c < '0' || c > '9') 
	    	c = getchar();
	    	int ret = 0;
	    	while (c >= '0' && c <= '9') 
	    	{
		ret = 10 * ret + c - '0';
		c = getchar();
		}
		return ret;
*/


//inclusion of standard libarry
#include <stdio.h>

//#define gc getchar_unlocked
//prototype of read_int funtion
int read_int(void);

int main()
{
    //promt the user to netr the string
    puts("enter the number");
    //store the read_int funtion return value in any int variable
    int n = read_int();//calling of read_int funtion
    //print the result
    printf("%d is int \n", n);
}
//definition of readd int funtion
int read_int()
{      
        //storing the getchar() funtion value in c char variable
        char c = getchar();
	//logic
	while (c < '0' || c > '9') 
	    c = getchar();
	    int ret = 0;
	    while (c >= '0' && c <= '9') 
	    {
		ret = 10 * ret + c - '0';//here converting the char type variable in int data type and storing it.
		c = getchar();
	    }
		return ret;
}
