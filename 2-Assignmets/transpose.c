/*
program 		:program to matrix into transpose matrix
Author			:Isteyak
Organisation		: Emertxe
Algoritham		:
			1.promt the user to enter the number of row and col of matrix
			2.promt the entered matrix on screen
			3.//logic to convert transpose matrix
			3.1 enter change row and col of matrix
			3.2 copy col of 1st matrix into row of second matrix
			3.3 print the converted matric by enter-changing col nad row
			
*/


//inclusion of standard library
#include <stdio.h>

int main()
{
    //declaration of variable
    int m, n, c, d, matrix[10][10], transpose[10][10];

    //promt the usr to enter the row and col of matrix
    printf("Enter the number of rows and columns of matrix\n");

    //read the col and row of matrix
    scanf("%d%d", &m, &n);

    //accept the matrix from user
    printf("Enter elements of the matrix\n");

    for (c = 0; c < m; c++)
	for(d = 0; d < n; d++)
	    scanf("%d", &matrix[c][d]);

    //logic to convert transpose matrix
    for (c = 0; c < m; c++)
	for( d = 0 ; d < n ; d++ )
	    transpose[d][c] = matrix[c][d];//transpose logic

    printf("Transpose of the matrix:\n");
    //print the transpose matrix
    for (c = 0; c < n; c++) {
	for (d = 0; d < m; d++)
	    printf("%d\t", transpose[c][d]);
	printf("\n");
    }

    return 0;
}
