#include <stdio.h>


int main()
{
    int option;
    char choice;
    	int num,n;
    	int pos;
    	int loc;
	unsigned  int  val, l, m, x, p;
    do
    {

    printf("enter the option to perform opration \n 1. get_n_bits \n 2. get_n_bits_position \n 3. replace_n_bits \n 4. replace_n_bits_positon \n 5. toggle_n_bits_position\n ");


    scanf("%d", &option);


    switch (option)
    {
	case 1:
    
    
    	//promt the user to enter the number
    	printf("enter the number\n");

    	//read the given number
   	 scanf("%d", &num);

    	//promt the user to enter the n value
    	printf("enter the n value\n");

    	//read the n value
    	scanf("%d", &n);


    	num = num & ~(~0 << n);

    	printf("result = %d\n", num);

	break;
	
	case 2:
    
    
    	//promt the user to enter the number
    	printf("enter the number\n");

    	//read the given number
    	scanf("%d", &num);

    	//promt the user to enter the n value
    	printf("enter the n value\n");

    	//read the n value
    	scanf("%d", &n);

    	//promt the user to enter the n value
    	printf("enter the  pos\n");

    	//read the n value
    	scanf("%d", &pos);



        //num = (num & ~(~0 << n) << pos) >> ((sizeof(int) << 3) - pos);

    	num = (num & ~(~0 << n) << pos) >> pos;

    	printf("result = %d\n", num);
        
	break;

	case 3:



    	//promt the user to enter the value of num
    	printf("Enter the value of num\n");

    	//read the given value of num
    	scanf("%d", &num);
    
    	//promt the user to enter the value of val
    	printf("Enter the value of val\n");

    	//read the given value of num
    	scanf("%d", &val);
    
    
  	 //promt the user to enter the value of n
    	printf("Enter the value of n\n");

    	//read the given value of num
    	scanf("%d", &n);

    	//l = num >> n;

    	//p = l << n;

    	num = num & ((~0 >> n) << n);

   	// m = val << ((sizeof(int) * 8) - n);
    
   	// x = m >> ((sizeof(int) << 3) - n);

    	val = val & ~(~0 << n);
     
    	num = num | val;

    	printf("result = %u\n", num);

	break;

        case 4:
  

    	//promt the user to enter the value of num
   	 printf("Enter the value of num\n");

    	//read the given value of num
   	 scanf("%d", &num);
    
    	//promt the user to enter the value of val
    	printf("Enter the value of val\n");

    	//read the given value of val
    	scanf("%d", &val);
    
    
    	//promt the user to enter the value of n
    	printf("Enter the value of n\n");

    	//read the given value of n
    	 scanf("%d", &n);

    	//promt the user to enter the value of pos
    	printf("Enter the value of pos\n");

    	//read the given value of pos
    	scanf("%d", &pos);

    	//l = num >> n;

    	//p = l << n;

    	num = num & (((~0 >> n) << n) << pos);

   	// m = val << ((sizeof(int) * 8) - n);
    
   	// x = m >> ((sizeof(int) << 3) - n);

    	val = val & (~(~0 << n) << pos);
     
    	num = num | val;

        printf("result = %u\n", num);
        
	break;

        case 5:
	
    	//declaration of datatypes

    	//prompt the user to enter the number in hex format
    	printf("enter the number in hex format\n");

    	//read the given number
    	scanf("%x", &num);

    	//promt the user to enter the n
    	printf("enter the n \n");

    	//read the n value
    	scanf("%d", &n);
    
    	//promt the user to enter the loc
    	printf("enter the loc \n");

    	//read the n value
    	scanf("%d", &loc);

    	//logic
    	num = num ^ ~(~0 << n) << loc;

    	//print the result
    	printf("%x\n", num);
	
	break;

	default:
	printf("INVALID OPTION ENTER VALID OPTION");
	break;
    }
    }
    while (choice == 'y' || choice == 'Y');

    printf("enter the choice choice [y/Y] to repeat \n [n/N] to stop\n");

    scanf("%c", &choice);

    return 0;
}
