#include <stdio.h>


int main()
{
    int n, loc, new_element;

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
    //2. promte the usr to enter the loc;
    printf("Enter the loc: ");
    
    
    //0.0 scan the 'n' value
    scanf("%d", &loc);
    
    //2. promte the usr to enter the new_elemets;
    printf("Enter the new_elemet ");
    
    
    //0.0 scan the 'new_element
    scanf("%d", &new_element);

    //4. logic
    for (i = (n - 1); i >= loc; i--)
    {
	a[i + 1] = a[i];

    }
    a[loc] = new_element;


    //5. print the array
    
    for (i =0; i < n; i++)
    {
    	printf("%d\t", a[i]);
    }
    printf("\n");


    return 0;
}
