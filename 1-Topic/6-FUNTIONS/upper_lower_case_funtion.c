#include <stdio.h>



int upper_lower_case(char);


int main()
{
    char ch;

    //promte the user to enter the charcter
    printf("enter the character \n");

    scanf("%c", &ch);


   int result = upper_lower_case(ch);

   if (result == 1)
   {
       printf("%c : character is in upper case\n", ch);
   }
   else if (result == 2)
   {
       printf("%c : character is in lower case\n", ch);
   }
   else
       printf("%c :special character\n", ch);
}

int upper_lower_case(char ch)
{
    if ( ch >= 'a' && ch <= 'z')
    {
	return 2;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
	return 1;
    }
    else
	return 0;
}
