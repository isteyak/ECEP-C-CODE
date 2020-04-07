

#include <stdio.h>


int main()
{
    char arr[] = {1, 2, 3, 4, 5};
    char *p = arr[4];
int i;
    for(i = 0; i < 5; i++)
    {
	printf("%d\n", p[-i]);
    }


    return 0;
}
