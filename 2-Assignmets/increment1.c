/*
Tiltle		:program to implement pre post increment
Author		:isteyak
Organisation	:Emertxe
algoritham	:1.pre_increment
		1.1 read the number from user
		1.2 call the pre_incremnt funtion
		//logic
		unsigned mask = 0x00000001;//generate a mask
		while(mask & *n)//logic to read each bit of num
		{
		mask = mask << 1;//shift the mask
		}
 		*n = ~0 << (mask >> 1) & *n;//logic to clear continues bit
 		*n = mask | *n;//to get incremented value
		 int i = *n;
		 2.post_increment
		 2.1 read the number from user
		 2.2call the post_increment funtion
		 2.3//same logic of pre_incremnt
		 //but return the initial value of num.

 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//prototyeps of the funtion
int pre_increment(int *);
int post_increment(int *);
int main(int argc, char **argv)
{
    *argv++;
    //declaration of variable
    int num = atoi(*argv), i;

    int option;

//priomt the user to choose the option
    printf("enter the option\n1.pre_increment\n2.post_increment\nchoose your option :  ");
//reda the choosen option
    scanf("%d", &option);

    switch (option)
    {
	case 1:
	    //calling of pre_increment funtion
	     i = pre_increment(&num);
	    printf("i = %d , n =  %d \n", i, num);
	    break;
	case 2:
	    //calling of post_increment funtion
	     i = post_increment(&num);
	    printf("%d , %d ", i, num);
	    break;
	    default :
	    printf("choose right option\n");
	    break;

    }
}

//defintion of pre_increment funtion
int pre_increment(int *n)
{
    //logic
    unsigned mask = 0x00000001;

    while(mask & *n)
    {
	    mask = mask << 1;
    }
    *n = ~0 << (mask >> 1) & *n;
    *n = mask | *n;
    int i = *n;
    return i;   

}
//definition of post_increment funtion
int post_increment(int *n)

{
    //logic
    int i = *n;//preserve inition value

    unsigned mask = 0x00000001;

    while(mask & *n)
    {
	    mask = mask << 1;
    }


    *n = ~0 << (mask >> 1) & *n;
    *n = mask | *n;
    return i;//here returing initial value of num   

}

