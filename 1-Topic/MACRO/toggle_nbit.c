#include <stdio.h>

#define TOGGLE_NBIT(num, n)  (1 << n) ^ num


int main()

{
    unsigned char num;

    //promt the user to enter the input
    printf("enter the byte value : ");


    //read the byte
    scanf("%hhx", &num);

    int n;

    printf("enter n value : ");

    scanf("%d", &n);

   num = TOGGLE_NBIT(num, n);

	printf("after toggle : %hhx\n", num);


}
