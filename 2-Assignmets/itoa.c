#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
int my_itoa(int *, char *);
void reverse(char s[]);
int main()
{
    int n;

    char s[MAX];

    printf("Enter the number : ");

    scanf("%d", &n);

    my_itoa(&n, s);

    reverse(s);
    printf("integer to string is : %s\n", s);

   
}

int my_itoa(int *n, char *s)
{

    int i = 0; 

    while(*n > 0)
    {

//	printf("%d ", digit);
	*s = *n % 10 + '0'; 
	s++;

	*n = *n / 10;

    }

    *s = '\0';


}
void reverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
	c = s[i];
	s[i] = s[j];
	s[j] = c;
    }
}

