#include <stdio.h>

int my_endiness(int);
int prints_bits(char *);
int main()
{
    int n;

    //promt teh suer to enter the number
    printf("enter the number : ");

    //reda the gievn number
    scanf("%d", &n);

    my_endiness(n);

    printf("so as we can see processor is little endianess\n");
}

int my_endiness(int n)
{   int i = 1;
    char *ptr = (char *)&n;
while (i <= 4)
{
    

    prints_bits(ptr);
    printf("\t%p\n", (ptr++));
    i++;
}
}

int prints_bits(char *p)
{   
    //char *p = (char *)&num;
    //logic
    unsigned mask = 1 << (sizeof(char) << 3) - 1;

    for ( ; mask; mask >>= 1)
    {
	*p & mask ? putchar('1') : putchar('0');
    }
    //to print the new line
   // printf("\n");

}


