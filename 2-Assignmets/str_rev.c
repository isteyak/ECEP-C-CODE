/*
Title 		:string reverse c program
Author		:Isteyak
Organisation	:Emertxe
Algoritham 	:i
		1.read the string from user
		2.pass the string to str_rev funtion 
		3.apply the logic to reverse the string
		//logic
		while(*sptr)
		{
		sptr++;
		i++; // i is the index of the end locatio
		}
		// storing the string str in rev in reverse orde
		while(i >= 0)
		{


		First decrementing then using as it stores 
		the location after the end location due to above while loop

		sptr--;
 		*rptr = *sptr;  // storing the value in sptr in rptr
 		rptr++; // pointing to next location
 		i--;    // decrementing the index
 		}

 		String should always end with '\0' so explicitly 
		 putting it at the end of the strin

 		*rptr = '\0'; 

 */
#include <stdio.h>
int my_str_rev(char *, char *);
void reverse(char *str);
int main()
{
    printf("\ntStudytonight - Best place to learn\n");

    char str[100];
    char rev[100];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    int p;

    printf("choose option :\n1. rev_recursion\n2. rev_without_recursion: ");

    scanf("%d", &p);

    switch(p)
    {
	case 1:
		    my_str_rev(str, rev);
    		    printf("reverse string is : %s\n", rev);
		    break;
	case 2:
		printf("reverse string is :");
		reverse(str);
		printf("\n");
		break;
	default:
		printf("enter a valid option\n");
		break;

    }

}

int my_str_rev(char *sptr, char *rptr)
{
    int i = -1;
    // storing the ending address of str in sptr

    while(*sptr)
    {
	sptr++;
	i++; // i is the index of the end locatio
    }
    // storing the string str in rev in reverse orde
    while(i >= 0)
    {
	/*
	   First decrementing then using as it stores 
	   the location after the end location due to above while loop
	 */
	sptr--;
	*rptr = *sptr;  // storing the value in sptr in rptr
	rptr++; // pointing to next location
	i--;    // decrementing the index
    }
    /*
       String should always end with '\0' so explicitly 
       putting it at the end of the strin
     */
    *rptr = '\0'; 
    return 0;
}
void reverse(char *str)
{
    if(*str)//logic to reach at last position of string (at '\0') using recursion
    {
	reverse(str + 1);//calling recursively revrse funtion after incremented by 1
	printf("%c", *str);//print from at last character of string 
    }
}
