#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pre_increment(int);
int post_increment(int);
int main(int argc, char **argv)
{
    *argv++;
    int num = atoi(*argv), i;

    int option;

    printf("enter the option\n1.pre_increment\n2.post_increment\nchoose your option :  ");

    scanf("%d", &option);

    switch (option)
    {
	case 1:
	     i = pre_increment(num);
	    printf("%d , %d ", i, num);
	    break;
	case 2:
	     i = post_increment(num);
	    printf("%d , %d ", i, num);
	    break;
	    default :
	    printf("choose right option\n");
	    break;

    }
}


int pre_increment(int n)
{
    unsigned mask = 0x00000001;

    while(mask & n)
    {
	if(mask & n)
	{
	    mask = mask << 1;
	}
	else
	{
	    mask = mask << 1;
	}

    }
    n = ~0 << (mask >> 1) & n;
    n = mask | n;
    int i = n;
    return i;   

}

int post_increment(int n)

{
    int i = n;
    unsigned mask = 0x00000001;

    while(mask & n)
    {

	    mask = mask << 1;
    }
    n = ~0 << (mask >> 1) & n;
    n = mask | n;
    return i;   

}

