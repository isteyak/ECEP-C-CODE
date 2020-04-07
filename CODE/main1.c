

#include <string.h>
#include <stdio.h>


int main()
{
    char *linus = "linux will rule!";
    char sallman[] = "brave gnu world!";


    if(sizeof(sallman) > sizeof(linus))
    {
	printf("sallman > linus\n");
    }
    else
	printf("linus > sallman\n");


	printf("%u,  %u\n", sizeof(sallman), sizeof(linus));

	printf("%u %u\n", strlen(sallman), strlen(linus));
}
