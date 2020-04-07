#include <stdio.h>

int my_strcmp(const char *, const char *);

int my_str_case_cmp(const char *, const char *);

int main()
{
    char string1[50],string2[50];
    int n, r;
    //promt the user to choose option
    printf("Enter the option \n 1.string compare \n 2. string case compare\n");

    scanf("%d", &n);

    switch (n)
    {
	case 1:
		printf("enter the first string : ");

		scanf("%s", string1);
		
		printf("enter the second string : ");

		scanf("%s", string2);
		
		 r = my_strcmp(string1,string2);

		if (r == 0)
		{
		    printf("string1 and string 2 is equal\n");
		}
		else
		    printf("string1 and string2 differ\n");

		    break;
	case 2:
		
		printf("enter the first string : ");

		scanf("%s", string1);
		
		printf("enter the second string : ");

		scanf("%s", string2);
		
		 r = my_str_case_cmp(string1,string2);


		if (r == -10)
		{
		    printf("string1 and string 2 is equal\n");
		}
		else
		    printf("string1 and string2 differ\n");

		    break;
    }

    return 0;
}

int my_strcmp(const char *s1, const char *s2)
{
    int l1 = 0, l2 = 0;

    while (*s1 != '\0')
    {
	l1++;
	s1++;
    }
    while (*s2 != '\0')
    {
	l2++;
	s2++;
    }
    if (l1 == l2)
    {
	return 0;
    }
    else
	return 1;

}
int my_str_case_cmp(const char *s1, const char *s2)

{
    while (*s1 == *s2)
	
	{
	    s1++;
	    s2++;
	}
 
 return *s1 - *s2;
}
	

