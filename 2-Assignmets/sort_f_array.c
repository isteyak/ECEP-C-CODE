
#include <stdio.h>


#define size 50
float sort_f_array(float *, int, float, float);

int main()
{
    float array_f[size], smallest;
    int n, i, j, fs, ns;

    //promt the user to enter the number of element in array
    printf("Enter the n value to store the float array : ");


    scanf("%d", &n);

    //promt the user to enter the float arrray
    printf("Enter the % d float element : ", n);

    for (i = 0; i < n; i++)
    {

	scanf("%f", &array_f[i]);
    
    }
      fs = array_f[0];

      ns = 0.0;
      
     for (j = 0; j < n; j++)
     {

    float a = sort_f_array(array_f, n, fs, ns);
        ns = a;
      fs = 0.0;
    printf("%.2f, ", a);
     }
}
float sort_f_array(float *f, int n, float fs, float ns)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
	if (*f < fs && *f >= ns)
	{
	    fs = *f;
	}
	f++;
	
    }
    return fs;
}
