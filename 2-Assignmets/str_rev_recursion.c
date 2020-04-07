/*
Title 		:string reverse c program
Author		:Isteyak
Organisation	:Emertxe
Algoritham 	:
		1.promt the user to enter the string
		2.read the string
		3.call the revrse funtion
		//logic to revrse
		//reach at last position of string at '\0' using recursive concept and print from at last character


 */
#include <stdio.h>

 #define MAX 50

//definition of reverse funtion
void reverse(char *str)
{
    if(*str)//logic to reach at last position of string (at '\0') using recursion
    {
	reverse(str + 1);//calling recursively revrse funtion after incremented by 1
	printf("%c", *str);//print from at last character of string 
    }
}

 int main()
 {
     //declarartion of variable
     char a[MAX];

     //promt the usre to enter the string
     printf("Enter the string : ");
     
     //read the given string
    scanf("%[^\n]s", a); 
     //calling revrse funtion
     reverse(a);

     printf("\n");

     return 0;


 }
