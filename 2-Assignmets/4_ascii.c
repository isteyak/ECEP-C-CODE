/*
Title		:program to find ascii number of character
Author		:Isteyak
Organisation	:Emetxe
Algoritham	:
		 if (char >= 0 && char < 33)
		 {
		     pf(%c is non_pritable) ->(%c means that character is non printable)
		 }
		 else if (char ==127)
		     pf(%c is non_pritable)
*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{
    char choice;

do
{
    //declaration of variable datatypes
    unsigned char ch;//unsigned char to restrict the -ve value of char
    
    //to print representation format
    printf("Dec	Oct	Hex	Ascii\n");

    //logic for itteration, from 0 to 127
    for (ch=0; ch <= 127; ch++)
    {
	//condition for non printible character from 0 to 32 
	if (ch >= 0 && ch < 33)
	{
	      printf("%d	%o	%x	non printable\n", ch, ch, ch);

        }
	else if(ch == 127)
	{
	      printf("%d	%o	%x	non printable\n", ch, ch, ch);

	}
	//else print characer
	else
	    printf("%d	%o	%x	%c\n", ch, ch, ch, ch);
    }
    printf("enter the choice to repeat : [y/Y] : not repeat [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
return 0;
}
