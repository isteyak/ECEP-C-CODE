/*
program to generate fibonacci serias
*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{
    //declaration of datatypes
    int x=0,y=1,z=0,i=1,limit;
    
    //promt the user to enter the limiting number
    printf("enter the limit for fibonacci series\n");

    //read the given number
    scanf("%d", &limit);

    //logic
    printf("%d, ", x);
    printf("%d, ", y);


    if (limit > 0)
    {
	
    		while ((z=x+y) <= limit)
    		{
	
		//z=x+y;
		    printf("%d, ", z);
		    x=y;
		    y=z;
    		}
    
    }
    else
	while ((z=x-y) >= limit)
    		{
		    x = y;
		    y = z;
		  if ((z=x-y) <= limit)
		  {
		  printf("%d, ", z);
		  return 0;
		  }
		  else
		      printf("%d, ", z);
    		}
    
printf("\n");

}
