/*
Title		:program to sort array
Auhtor		:Isteyak
Organisation	:Emertxe
Algoritham	:
		1.allocate the memory for array of pointer
		2.allocate the memmory for each row
		3.populate
		4.find the avg of each row
		5.sort the array of pointer according to option entered
		6.sort each row according to the option entered at cl
*/



#include <stdio.h>
#include <stdlib.h>

//prototype of funtion
void print_a(int **p, int n, int *size);
void allocate_populate_avrage(int **p, int n, int *size);
void sort(int **p, int n, int *size);
void print(int **p, int n, int *size);


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
    
    int **p = malloc(n * sizeof(int *));

    size = malloc(n * sizeof(int));//allocation memory for size array
   
   allocate_populate_avrage(p, n, size);//calling of funtion to populate and allocate memory for colomn array.


   sort(p, n, size);//calling of sort funtion to sort the array
   
   printf("\n");

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
//definition of allaocate_populate_avarage funtion
void allocate_populate_avrage(int **p, int n, int *size)
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
	p[i] = malloc((size[i] + 1) * sizeof(int));

	//5.promt the user to enter the items one by one
	printf("enter %d items for %dth row ", size[i], i);

	//5.scan the items
	sum = 0;

        //logic to calculate sum of array elements
	for(j =0; j < size[i]; j++)
	{
	    scanf("%d", p[i] + j);

	    sum = sum + *(p[i] + j);
	}

	*(float *)(p[i] + j) = sum / size[i];//here storing avg of elements in last colom block
    }
}
/*
   Funtion -2 to print the items of each row array
 */
void print(int **p, int n, int *size)
{

    int i, j;//declaration of variable
    
    //logic to print gievn array elements
    for(i = 0; i < n; i++)
    {
	printf("%p\t", p[i]);

	for(j = 0; j < size[i]; j++)
	{
	    printf("%d ", *(p[i] + j));
	}

	printf(" %f ", *(float *)(p[i] + j));//printing last column that is float.

	printf("\n");
    }
}
void sort(int **p, int n, int *size)
{
    //declaration of variable
    int i = 0, j;
    int *temp;
    int temp1;
    //logic to sort the array based on avg value of an array.
    for(j = 0; j < n; j++)
    {
	for(i = 0; i < (n-1); i++)
	{
	    if(*(p[i] + size[i]) >= *(p[i + 1] + size[i + 1]))//logic to compare last avg value of array 
	    {
		//logic to exchange address if row array
		temp = p[i];
		p[i]= p[i + 1];
		p[i + 1] = temp;
		//logic to exhcange size array
		temp1 = size[i];
		size[i] = size[i + 1];
		size[i + 1] = temp1;
	    }
	}
    }

}

//defintion of print assending order funtion
void print_a(int **p, int n, int *size)
{

    int i, j;//dclration of variable

    //logic to print assending order array
    for(i = n-1; i >= 0; i--)
    {
	printf("%p\t", p[i]);
	for(j = 0; j < size[i]; j++)
	{
	    printf("%d ", *(p[i] + j));
	}

	    printf(" %f ", *(float *)(p[i] + j));
	    printf("\n");
    }
}
