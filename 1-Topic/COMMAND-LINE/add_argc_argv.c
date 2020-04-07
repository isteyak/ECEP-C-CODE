#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    int sum;
    *argv++;
    for ( ; *argv; *argv++)
    {
	sum = sum + atoi(*argv);
    }
    
	printf("%f is avg \n", (float)sum/(argc-1));
}
