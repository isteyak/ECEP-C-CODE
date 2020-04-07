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
    int large = a[0];
    for (i =0; i < n; i++)
    {
	if (large < a[i])
	{
	    large = a[i];
	}
    }

    //5. print the array
    
    for (i =0; i < n; i++)
    {
    	printf("%d\t", a[i]);
    }

    printf("\n");
    printf("large : %d \n", large);
    printf("\n");


    return 0;
}
