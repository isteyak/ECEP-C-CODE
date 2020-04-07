#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char text[100], blank[100];

    int c = 0, d = 0;

    printf("enter text\n");

    gets(text);

    while(text[c] != '\0')
    {
	if(text[c] == ' ')
	{
	    int temp = c + 1;

	    if(text[temp] != '\0')
	    {
		while(text[temp] == ' ')
		{
		    c++;
		    temp++;
		}
	    }

	}
	blank[d] = text[c];
	c++;
	d++;
    }
    blank[d] = '\0';

    printf("%s\n", blank);
    return 0;
}
