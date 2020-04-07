/* 
title			:Let us write a Version of squeeze(s1,s2) that deletes each character in the string 1 that matches any character in the string s2
Author			:Isteyak
Organisation		:Emertxe
Algoritham		:
			1.read the s1 and s2 string from the user
			2.perform the logic operation to squuez both the string
			//logic
    			for(i = 0;s1[i] != '\0'; ++i)//start from s1 0 index 
    			{
			for(j = 0; (s1[i] != s2[j]) && s2[j] != '\0' ; ++j)//condition if both string character is not equal and s2 string is not NULL then in                        crement the j
			{
			     ;
			}
			if(s2[j] == '\0')//condition if s2 string pointing to NUll character
			{
			s1[k++] = s1[i];//storing  unmatched s1 string character into s1 string and modifying s1 string
			}
			}		
			s1[k]='\0';//lastly puth the null character in s1 string
 */
//inclusion of standard libary
#include<stdio.h>

#define MAXLINE 1000
//protype of mgetline funtion and squeez funtion
int mgetline(char line[],int maxline);
void squeeze(char s1[],char s2[]);

int main(void)
{
    char choice;
do
{
    char s1[MAXLINE],s2[MAXLINE];//declaration of s1, s2 string
    //promt the user to enter the s1 string
    puts("s1 : ");
    //calling the mget funtion to get s1 string
    mgetline(s1,MAXLINE);
    //promt the user to neter the s2 string
    puts("s2 : ");
    //calling the funtion to enter the s2 string
    mgetline(s2,MAXLINE);
    //calling the squeez funtion to squueez the string
    squeeze(s1,s2);
    //printing the original s1 string
    printf("%s\n",s1);
    printf("choose option to continue : [y/Y] :not continue [n/N] : ");

    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
    return 0;
}
//definition of mget funtion
int mgetline(char s[],int lim)
{
    int i,c;
    //logic to get character from buffer till the end
    for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	s[i] = c;
    if(c == '\n')
	s[i++] = c;
    s[i] = '\0';
}
//defintion of squeez funtion
void squeeze(char s1[],char s2[])
{
    int i,j,k;
    k = 0;

    for(i = 0;s1[i] != '\0'; ++i)//loop to access each charcter in s1 string
    {
	for(j = 0; (s1[i] != s2[j]) && s2[j] != '\0' ; ++j)//condition and loop to check each unmatched s1 and s2 string character
	{
	    ;
	}
	if(s2[j] == '\0')//if last chacter of s2 string
	{
	    s1[k++] = s1[i];//to modify s1 unmatched character s1 string
	}
    }		
    s1[k]='\0';//lastly put he null character in modified s1 string
}


