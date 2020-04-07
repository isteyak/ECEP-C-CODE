#include <stdio.h>

#define N_BITS_OPERATION(num, n, loc, choice) \
						switch(choice)\
						    {\
						    case 1:\
						         num = ~(~(~0 << n) << loc) & num;\
							 break;\
					    	    case 2: \
						         num = (~(~0 << n) << loc) | num;\
							 break;\
						    case 3:\
						         num = (~(~0 << n) << loc) ^ num;\
							 break;\
						         \
						    }

int main()
{
    int num, loc, n;

    printf("enter the num, loc and n : ");

    scanf("%d%d%d", &num, &loc, &n);

    printf("Enter the option \n1. to clear n bits from location\n2. to set n bits from location\n3. to toggle n bits from location : ");

    int choice;

    scanf("%d", &choice);
    printf("\n");

    N_BITS_OPERATION(num, n, loc, choice)
    printf("%d is new_num\n", num);
}
