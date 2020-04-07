#include <stdio.h>
float smallest_float(float *, int, float, float);

void print_array(float *, int);

#define size 50

int main()
{
    float array_f[size], smallest;
    int n, i, j;

    //promt the user to enter the number of element in array
    printf("Enter the n value to store the float array : ");


    scanf("%d", &n);

    //promt the user to enter the float arrray
    printf("Enter the % d float element : ", n);

    for (i = 0; i < n; i++)
    {

	scanf("%f", &array_f[i]);
    
    }
    smallest = array_f[0];
    float a = smallest_float(array_f, n, smallest, 0.0);
     
    for (i = 0; i < n; i++)
    {
	if (array_f[i] > a)
	{
	    smallest = array_f[i];
	    a = smallest_float(array_f, n, smallest, a);

	}

//    printf("%.2f\n", a);
    }


}
 float smallest_float(float *f, int n, float smallest, float r)
 {
     int i;
     for (i = 0; i < n; i++)
     {
	 
	 if (smallest > *f && *f >= r)
	 
	 {
	     smallest = *f;
	     printf("%d %.2f\n", i, smallest);
	 }
	f++;
     }
return smallest;
      
  }
      
 
   

void print_array(float *f, int n)
{
    while (n)
    {
	printf("%.2f,", *f);

	f--;
	n--;
    }
  
}



