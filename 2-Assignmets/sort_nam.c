#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void populate(char **, int);



int main()
{
    int n;

    printf("Enter the no of name :");

    scanf("%d", &n);

    char **p = (char **)malloc(n * sizeof(char *));

    populate(p, n);
}

void populate(char **p, int n)
{
    char *temp;
    int i, j;

    char str[n][10];

    printf("Enter the %d names :", n);

    for(i = 0; i < n; i++)
    {
	scanf("%s", str[i]);
	p[i] = str[i];
    }

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < n - 1; j++)
	{
	    if(strcmp(p[j], p[j+ 1]) > 0)
	    {
		temp = p[j];

		p[j] = p[j + 1];
		
		p[j + 1] = temp;
	    }
	}
    }
    printf("reoder string :\n");
    for(i = 0; i < n; i++)
    {
	printf("%s\n", p[i]);
    }
}
