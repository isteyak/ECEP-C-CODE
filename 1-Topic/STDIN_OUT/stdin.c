#include <stdio.h>
#include <stdio_ext.h>


int main()
{
    int i;
    char a[5];

    printf("Enter the 5 character : ");

    for (i = 0; i < 5; i++)
    {
	//scanf("\n%c", a + i);
	scanf("\n%c", a + i);
	//__fpurge(stdin);
    }

    for(i = 0; i < 5; i++)
    {
	printf("%c", *(a + i));
    }

    printf("\n");
}
