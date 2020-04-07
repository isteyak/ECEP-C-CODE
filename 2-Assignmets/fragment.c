/*
1.allocate the memory for array of pointer
2.allocate the memmory for each row
3.populate
4.find the avg of each row
5.sort the array of pointer according to option entered
6.sort each row according to the option entered at cl
*/



#include <stdio.h>
#include <stdlib.h>

void print_a(float **p, int n, int *size);
void allocate_populate_avrage(float **p, int n, int *size);

void sort(float **p, int n, int *size);
void print(float **p, int n, int *size);
int main(int argc, char **argv)
{
    *argv++;
    //1.declare the variables
    int n;
    int *size;

    //2.promt the user to enter the n value
    printf("enter the n value : ");

    //3.read n
    scanf("%d", &n);

    //4.allocate the memory for array of pointer
    //int (*p)[n] = malloc(n * sizeof(int));
    
    float **p = malloc(n * sizeof(float *));

    size = malloc(n * sizeof(int));
   
   allocate_populate_avrage(p, n, size);


	sort(p, n, size);
   printf("\n\n");
   if(**argv == 'd')
   {
   print_a(p, n, size);
   }
   else if(**argv == 'a')
   {
   print(p, n, size);
   printf("\n\n");
   }

}

/*
Funtion -1;
void allocate_avr(float **p, int n, int *size);
*/

void allocate_populate_avrage(float **p, int n, int *size)
{
    //declre the variable
    int i, j;
    float sum;

    for (i = 0; i < n; i++)
    {
	//2.promt the user to netr the number of cols for each row
	printf("Enter no. of cols for %dth row : ", i);

	//3.scan the value.
	scanf("%d", size + i);

	//4. allocat the memrory for each row dynamically
	p[i] = malloc((size[i] + 1) * sizeof(float));

	//5.promt the user to enter the items one by one
	printf("enter %d items for %dth row ", size[i], i);

	//5.scan the items
	sum = 0;
	
	for(j =0; j < size[i]; j++)
	{
	    scanf("%f", p[i] + j);

	    sum = sum + *(p[i] + j);
	}

	*(p[i] + j) = sum / size[i];
    }
}
/*
Funtion -2 to print the items of each row array
*/
void print(float **p, int n, int *size)
{

    int i, j;

    for(i = 0; i < n; i++)
    {
	printf("%p\t", p[i]);
	for(j = 0; j <= size[i]; j++)
	{
	    printf("%f", *(p[i] + j));
	}
	    printf("\n");
    }
}
void sort(float **p, int n, int *size)
{

int i = 0, j;
float *temp;
int temp1;
for(j = 0; j < n; j++)
{
    for(i = 0; i < (n-1); i++)
    {
	if(*(p[i] + size[i]) >= *(p[i + 1] + size[i + 1]))
	{
	    temp = p[i];
	    p[i]= p[i + 1];
	    p[i + 1] = temp;
	    temp1 = size[i];
	    size[i] = size[i + 1];
	    size[i + 1] = temp1;
	}
    }
}

}
void print_a(float **p, int n, int *size)
{

    int i, j;

    for(i = n-1; i >= 0; i--)
    {
	printf("%p\t", p[i]);
	for(j = 0; j <= size[i]; j++)
	{
	    printf("%f", *(p[i] + j));
	}
	    printf("\n");
    }
}
