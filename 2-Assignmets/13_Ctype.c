/*
Title          : Program to write bitwise library
Author         : Isteyak
Organisation   : Emertxe
Algorithm      : 1.Prompt the user to enter the value
				 2.read the value
				 3.prompt the user to entre the choice
				 4.read choice
				  a.isalnum
				  b.isalpha
				  c.isascii
				  d.isblank
				 5.read the choice from switch case
					a.isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
					b. isalpha() - checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some loc									ales, there may be additional characters for which isalpha() is true.letters which are neither upper case nor lower case.
					d. isascii() - checks whether c is a 7-bit unsigned char value that fits into the
									ASCII character set.
					e. isblank() - checks for a blank character; that is, a space or a tab.

				 
		
				
*/
#include <stdio.h>
//Prototype declaration
int isalnum(int c);
int isalpha(int c);
int isx(int c);
int isblank(int c);

int main()
{
	char ch,ch1;
	int n;

	printf("1-isalnum:\n2-isx:\n3-isalpha:\n4-isblank:\n");
	//Prompt the user to enter the val
	printf("Enter the character: \n");
	scanf("%c",&ch);

	printf("Enter your choice: ");
	scanf("%d",&n);

	switch (n)
	{
		case 1:
		     isalnum(ch);
		     if (isalnum(ch) == 1)
			 {
			 	 printf("The Entered character is isalnum\n");
			 }
			 else
			 {
			 	 printf("The Entered character is not isalnum\n");
			 }
			 break;
		case 2:
		     isx(ch);
		     if(isx(ch) == 1)
			 {
			 	 printf("The entered char is isx\n");
			 }
			 else
			 {
			 	 printf("The entered char is not isx\n");
			 }
			 break;
	    case 3:
	        isalpha(ch);
	        if(isalpha(ch) == 1)
			{
				printf("The entered char is isalpha\n");
			}
			else
			{
				printf("The entered char is not isalpha\n");
			}
			break;
		case 4:
		     isblank(ch);
		     if(isblank(ch) == 1)
			 {
			 	 printf("The entered char isblank\n");
			 }
			 else
			 {
			 	 printf("The emtered char is not blank\n");
			}
                    break;
	}
}
int isalnum(int c)
{
	return ((c >= 65 && c <= 90) || (c>= 97 && c <= 122) || (c >= 0 && c <= 9));
}
int isx(int c)
{
	return ((c >= 65 && c <= 70) || (c >= 97 && c <= 102) || (c >= 0 && c <= 9)); 
}
int isalpha(int c)
{
	return (( c >= 65 && c <= 90) || (c >= 97 && c <= 102));
}
int isblank(int c)
{
	return ((c == 32));
}

