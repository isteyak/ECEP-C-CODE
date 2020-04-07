/*
Title		:program to generate AP GP HP
Author		:Isteyak
Organisation	:Emertxe
Algoritham	:A = First number
		 R = Common difference(AP & HP), Common ratio(GP)
		 N = number of terms
		 A, R and N should be < 2 10
		 //logic for Ap
    		 for (i=0; i < N; i++)
		 {
	               	printf("%d, ", AP);
			AP = AP + R;
		 }
		 //logic for Gp
		 for (i=0; i < N; i++)
		 {	
	    		printf("%d, ", GP);
	    		GP = GP * R;
		 }
		 //logic for Hp
       		 for (i=0; i < N; i++)
       		 {
			HP = 1 / deno;
		    	deno += R;
	  		printf("%4f, ", HP);
       		 }

*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{
    //declaration of all the variable
    int A,R,i,AP,GP,N;
    
    //declaration of float variable
    float HP, deno;

    //prompt the user to enter the 1st number
    printf("enter the first number A : ");

    //read the first value
    scanf("%d", &A);

    //promt the user to enter the differance number
    printf("enter the differance number R : ");

    //read the difference number
    scanf("%d", &R);

    //promt the user to enter the limiting value
    printf("enter the number of terms N : ");

    //read the terms
    scanf("%d", &N);

    


    AP = A;
    GP = A;
    deno = A;
    //logic to avoid -ve number
    if (A < 0)
    {
	printf("INVALID INPUT\n");
    }
    else if (A > 2000)//logic to avoid A > 2000 case
    {
	printf("input is out of range");
    }

   else
   {
        printf("AP = ");
        //logic to print the Ap
        for (i = 0; i < N; i++)
	{
	    printf("%d, ", AP);
	    AP = AP + R;
	}
	printf("\n");
	printf("GP = ");
        //logic to print the Gp
	for (i = 0; i < N; i++)
	{
	    printf("%d, ", GP);
	    GP = GP * R;
	}
       printf("\n");
       printf("HP = ");
       //logic to print the Hp
       for (i = 0; i < N; i++)
       {
	   HP = 1 / deno;
	   deno += R;
	   printf("%4f, ", HP);
       }
   }
   printf("\n");
}
