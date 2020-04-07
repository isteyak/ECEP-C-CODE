/*
title		:program to replce blank in string
Author 		:Isteyak
Organisation	:Emertxe
Algoritham	:
		1.read the string from user
		2.pass that string base address in replace funtion
		3.apply logic to replace blank
		//logic
		check continues blank more than one
		make 1 than more blank 1 and continuesly
		till last string character.
		//logic
		while(str[c] != '\0')//looop to reach at last character of string
		{
		if(str[c] == ' ' && str[c + 1] == ' ')//logic to check continues more than 1 blank
		{
		str[c] = '1';//make more tha 1 blank '1'
		}
		c++;
		}
		//while printing string only print that character which are not 1.
 */



#include <stdio.h>
#define MAX 50

//defintion of replace funtion
void replace(char *str)
{
    int c = 0;//declaration of variable
    while(str[c] != '\0')//loop to reach at last character of string
    {
	if(str[c] == ' ' && str[c + 1] == ' ')//logic to check  more than one blank
	{
	    str[c] = '1';//make that more than 1 blank 1.

	}
	c++;//increment the pointed pointer by 1.
    }
}

int main()
{
    char str[MAX];//declaration of string variable

    //promt the user to netr the string
    printf("Enter the string : ");

    //read the given string

    scanf("%[^\n]s",str );

    int i = 0;//declaration of variable

    //call the replace funtion
    replace(str);

    //print the string tille \0 
    while(str[i] != '\0')
    {
	if(str[i] != '1')
	    printf("%c", str[i]);
	i++;
    }
    printf("\n");//print new line

}
