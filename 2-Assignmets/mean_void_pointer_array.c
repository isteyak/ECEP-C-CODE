/*
Title		:program to calulate mean for all data types
Author		:Isteyak
Oragnisation 	:Emertxe
Algoritham	:
		1. promt the user to enter the choice
		2. switch case according to entered choice
		3. read the array 
		4. call the mean funtion and pass argument like addres of array, number of element in array, enterd option
		5.write a defintion of mean funtion 
		5.1 create the void  pointer to point array
		5.2 add the array element 
		5.3 cal avg of array elemnts
		return the avg value to called funtion.
*/

//inclusion of standard libarary
#include <stdio.h>

//defining size of array

//prototype of mean array funtion
float mean_array(void *, int, int);

int main()
{
    int m;
		printf("Enter the number of element in array :");
		scanf("%d", &m);
    		//declaration of all requered variable
		int a[m], i;
		float n, f[m];
		short s[m];
		double d[m];


    //promt the user to enter the option
    printf(" 1. int\n 2. short\n 3.float\n 4.double\nEnter the choice : ");

    int choice;
    //reda the choice
    scanf("%d", &choice);

    switch (choice)//switch case according to entered choice
    {
	case 1://to read int array
		printf("Enter %d elements in array\n", m);

		for (i = 0; i < m; i++)
		{
		    scanf("%d", &a[i]);
		}
		for (i = 0; i < m; i++)
		{
		    printf("a[%d] -> %d\n", i, a[i]);
		}
		//calling mean_array funtion and storing returned value in n variabe
		  n  = mean_array(a,sizeof(a)/sizeof(a[0]), 1);
		  
		  //printing mean of array
		  printf("mean is : %f\n", n);

		  break;
	case 2://to read the shor array
		printf("Enter %d elements in array\n", m);
		for (i = 0; i < m; i++)
		{
		    scanf("%hd", &s[i]);
		}
		for (i = 0; i < m; i++)
		{
		    printf("a[%d] -> %hd\n", i, s[i]);
		}
		
		  n  = mean_array(s,sizeof(s)/sizeof(s[0]), 2);
		  printf("mean is : %f\n", n);
		  break;
	case 3://logic for float (to read and cal mean of array)
		printf("Enter %d elements in array\n", m);
		for (i = 0; i < m; i++)
		{
		    scanf("%f", &f[i]);
		}
		for (i = 0; i < m; i++)
		{
		    printf("a[%d] -> %f\n", i, f[i]);
		}
		
		  n  = mean_array(f,sizeof(f)/sizeof(f[0]), 3);
		  printf("mean is : %f\n", n);
		  break;
	case 4://smilarly for double
		printf("Enter %d elements in array\n", m);
		for (i = 0; i < m; i++)
		{
		    scanf("%lf", &d[i]);
		}
		for (i = 0; i < m; i++)
		{
		    printf("a[%d] -> %lf\n", i, d[i]);
		}
		
		  n  = mean_array(d,sizeof(d)/sizeof(d[0]), 4);
		  printf("mean is : %f\n", n);
		  break;

    }


    
}
//definition of mean_array funtion
float mean_array(void *p, int size, int option)
{
    		   //declaration of variable
	    	   float sum_i;
		   float mean;
		   int i;
        //switching option according to option
 	switch (option)
	{
	    case 1://logic to calculate sum of int array
		   for(i = 0; i < size; i++)
		   {
		  	 sum_i = sum_i + *(int *)p;//p is void pointer so to fetch the in datatype value we r type casting and adding in sum variable for each array elements
		  	p = (int *)p + 1;// incrementing p pointer by type casting so that it will point next array element
		   }
		   mean = (float)sum_i / size;//calculation mean of array
		   break;
	    case 2://same logic of int array will apply here just we need to type cast
		   for(i = 0; i < size; i++)
		   {

		  	 sum_i = sum_i + *(short *)p;
		  	p = (short *)p + 1;
		   }
		   mean = (float)sum_i / size;
		   break;
	    case 3:
		   for(i = 0; i < size; i++)
		   {
		  	 sum_i = sum_i + *(float *)p;
		  	p = (float *)p + 1;
		   }
		   mean = sum_i / size;
		   break;
	    case 4:
		   for(i = 0; i < size; i++)
		   {
		  	 sum_i = sum_i + *(double *)p;
		  	p = (double *)p + 1;
		   }
		   mean = sum_i / size;
		   break;
	}
  return mean;
}

