/*
Title  		:recursive fibonacci series
Auther		:Isteyak
Organisation	:Emertxe
Algoritham	:
    		//promt the user to enter the number
    		//read the given numberi
		1.//logic to genrate +ve fibo series
                 a = b;
                 b = z;
                 printf("%d,", z);
        	 fibo(a, b, l);
    		 if ((z = a + b) <= l)//till this condition call the funtion again and again recursively
	          fibo(a, b, l);
		  2.//logic to generate -ve fibo series
		  a = b;
		  b = z;
		  fibo(a,b,l);
		  if ((z = a + b) >= l)
		      fibo(a, b, l)//call this funtion recursively till that if conditon


*/
//inclusion of standard libarary
#include <stdio.h>
//prototype of fibo funtion
int fibo(int, int, int);

int main()
{
    int l, a = 0, b = 1;

    //promt the user to enter the number
    printf("enter the number l\n");

    //read the given number
    scanf("%d", &l);
    

    printf("%d,", a);
    printf("%d,", b);

     //calling of funtion
     fibo(a, b, l);
	printf("\b");
	printf("\n");

}

int fibo(int a, int b, int l)
{
    int s, z, temp;

    //z = a + b;
    //b = a + b;
    //printf("%d,", z);

    //a = b;

    //b = z;

    //logic to generate +ve fibo series
	if(l > 0)
	{
    		if ((z = a + b) <= l)
    		{

      			a = b;
      			b = z;
      			printf("%d,", z);
			fibo(a, b, l);

    		}

    	else
		return 0;
	}
	//logic to generate -ve fibo series
	else if (l < 0)
	{
	    z = a - b;

	    temp = l * (-1);

	    if ( z >= l && z <= temp)
	    {
		a = b;
		b = z;
		printf("%d, ", z);
		fibo(a, b, l);
	    }
        }

    		
    	
    		
    		
    	else
	{
		return 0;
	}

return 0;
}
