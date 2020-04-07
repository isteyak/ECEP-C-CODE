#include <stdio.h>


int main()
{

    int num, n, choice;

    //promt the user to enter the num
    printf("enter the num\n");

    //read the given number
    scanf("%d", &num);
    //promt the user to enter the n
    printf("enter the n\n");

    //read the given n
    scanf("%d", &n);

    printf("enter your choice\n 1. left circular shift \n 2. right circular shift\n");

    scanf("%d", &choice);

    switch(choice)
    {
	case 1:

    		num = (num << n) | num >> ((sizeof(int) << 3) - n);

    		printf("%u\n", num);

		break;

	case 2:	

	    	num = (num >> n) | (num << (sizeof(int) << 3) - n );

    		printf("%u\n", num);

		break;
       default:
               printf("enter valid option choice\n");
}
return 0;
}
