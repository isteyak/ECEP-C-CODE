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

    int j, temp, rot;

    //promt the user to enter the rotation value
    printf("Enter the rotate value : ");

    //read the rotate value
    scanf("%d", &rot);

    for (i =  rot; i > 0; i--)
    {
    temp = a[n - 1];

    for (j = (n - 2); j >= 0; j--)
    {
	a[j + 1] = a[j];
    }
    a[0] = temp;
    }

    //5. print the array
    
    for (i =0; i < n; i++)
    {
    	printf("%d\t", a[i]);
    }
    printf("\n");


    return 0;
}
