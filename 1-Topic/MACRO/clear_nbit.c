#include <stdio.h>

#define CLEAR_NBIT()  ~(1 << n) & num


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

   num = CLEAR_NBIT();

	printf("after clearing : %hhx\n", num);


}
