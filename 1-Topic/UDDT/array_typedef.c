#include <stdio.h>


typedef int array_of_100[100];


int main()
{
    array_of_100 array;

    printf("%zu is size of array \n", sizeof(array));
}
