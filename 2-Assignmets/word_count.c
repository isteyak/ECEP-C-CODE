/*program to count no of lines, words and 	 *
* characters in a file.			 *
*************************************************/
/*
program 		:program to count word line and character
Author 			:Isteyak
Organisation		:Emertxe
AlgorithaM		:
			1.Promt the user to enter the string
			2.read the stdin buffer and store each character in a variable
			3.chack each chacter of stdin buffer till the EOF(till last character)
			4.if character is not equal to new line increment char count++
			5.if charcter is space or new line increment word count++
			6.if character is new line increment line count++
*/

#include <stdio.h>

int main()
{
    char ch;
    int linecount, wordcount, charcount;
char choice;

do
{
    // Initialize counter variables
    linecount = 0;
    wordcount = 0;
    charcount = 0;

    // Prompt user to enter filename
    printf("Enter a filename :");

	//Repeat until End Of File character is reached.	
	while ((ch=getc(stdin)) != EOF) {
	    // Increment character count if NOT new line or space
//	    if (ch != ' ' && ch != '\n') { ++charcount; }
	    if (ch != '\n') { ++charcount; }

	    // Increment word count if new line or space character
	    if (ch == ' ' || ch == '\n') { ++wordcount; }

	    // Increment line count if new line character
	    if (ch == '\n') { ++linecount; }



	}

/*
	if (charcount > 0) {
	    ++linecount;
	    ++wordcount;
	}
*/
    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

    printf("Enter the choice to repeat : [y/Y] : [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
    return(0);
}
