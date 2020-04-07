#include <stdio.h>


int main()
{
    int n;

    //0.promt the user to enter the 'n' value
    printf("Enter 'n' value: ");

    //0.0 scan the 'n' value
    scanf("%d", &n);

    //declare an array
    //int a[5];

    int a[n];

    //2. promte the usr to enter the items
    printf("Enter the %d items: ", n);

    //3. scan the items
    int i;
    for (i =0; i < n; i++)
    {
    	scanf("%d", &a[i]);
    }

    //4. logic
    int j,temp;
    for (i = 0; i < (n - 1); i++)
    {
	for (j = 0; j < (n - 1 - i); j++);
	{
	    if (a[j] > a[j+1])
	    {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	    }
	}
    }


    //5. print the array
    
    for (i =0; i < n; i++)
    {
    	printf("%d\t", a[i]);
    }
    printf("\n");


    return 0;
}
