/*
Title		:program to calculate ..... of given numer
Author		:isteyak 
Organisation	:Emertxe
Algoritham	:1.read the n value
		2.read n elemnt in array
		3.pass the n value and element in variance funtion
		4.appy logic to get mean of element
		5.appy logic to get variance of elemnts
		//logic to calculate sum of elemnt
		for(i = 0; i < count; i++)//logic to calculate sum of given arguments
		{
		d = va_arg(ap, int);
		sum += (d);
		}
		mean = sum / size;
		//logic to calculate variance of elements
		for(i = 0; i < count; i++)//logic to calculate differance of element and mean (sqaure the differance and add in sum)
		{
		d = va_arg(ap, int) - mean;
		sum = sum + (d * d);//logic to calculate variance of given argument
		}
		//variance = sum / size;

 */



#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

//prototype of variance sum funtion
int sum(int , ...);

int main()
{

    //declaration of variable
    int n, i;

    //promt the user to netr the number of element
    printf("Enter the number of  elements: ");

    //reda the given value
    scanf("%d", &n);

    //int p[n];
    //allocate the memory to store element dynamically.
    int *p = malloc(n * sizeof(int));

    //read the element for allocated array
    for(i = 0; i < n; i++)
    {
	printf("p[%d] -> ", i);
	scanf("%d", p + i);
	printf("\n");
    }

    //call sum funtion and pass the argument with inition argument count.
    int mean = sum(n,p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7], p[8], p[9]);

    //print result
    printf("the variance of enterded number is %d \n", mean/n);
}


//definition of variance funtion sum.
int sum(int count, ...)
{
    va_list ap;//this is declare a pointer ap

    int sum = 0;//declaration of sum variable

    int i, d;//declaration of variable

    va_start(ap, count);//this is to start the ap pointer from count variable 

    for(i = 0; i < count; i++)//logic to calculate sum of given arguments
    {
	d = va_arg(ap, int);

	sum += (d);
    }

    va_end(ap);//this is to end the ap variable

    int mean = sum / count;//to calculate mean of given argument

    sum = 0;//reinitialize sum = 0;

   va_start(ap, count);//re_start ap pointer from count

    for(i = 0; i < count; i++)//logic to calculate differance of element and mean (sqaure the differance and add in sum)
    {
	d = va_arg(ap, int) - mean;

	sum = sum + (d * d);//logic to calculate variance of given argument
	
    }
    va_end(ap);//end the ap pointer//or free the ap pointer

return sum;//retrun sum;
}
