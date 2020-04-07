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

//inclusion of standard library
#include <stdio.h>

int main(){

//char choice;

//do
//{

    //declaration varialbe
    char ch;
    unsigned int long linecount, wordcount, charcount;
    int u;
    linecount=0;
    wordcount=0;
    charcount=0;


    //promt the user to enter the string
    printf("Enter the string : \n");

    //condition to check each character of string till the last character
    while((ch=getc(stdin))!=EOF){
	getchar();

	if (ch !='\n') {++charcount;}//condition for character count
	if (ch==' ' || ch=='\n') {++wordcount;}//condition for word count

	if (ch=='\n') {++linecount;}//condition for new line count

    }
    if(charcount>0){
	++wordcount;
	++linecount;
    }


    //print the result
    printf( "char count : %lu \nword count : %lu\nline count : %lu\n", charcount, wordcount, linecount );

  //  printf("Enter the choice y to continue nad n to stop\n");
    //scanf("%c", &choice);

    return 0;
//}while(choice == 'y' || choice == 'Y');
}
