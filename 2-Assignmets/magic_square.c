/*
program		:program to generate nxn odd number magic square
Author		:isteyak
Organisation	:Emertxe
Algoritham	:
		1.promt the user to enter the n value
		2.pass n vlue to magic square funtion
		3.//logic to generate magic square
		int i = n/2
		int j  = n-1
		Steps:
		1. position of number 1 = (3/2, 3-1) = (1, 2)
		2. position of number 2 = (1-1, 2+1) = (0, 0)
		3. position of number 3 = (0-1, 0+1) = (3-1, 1) = (2, 1)
		4. position of number 4 = (2-1, 1+1) = (1, 2)
		   Since, at this position, 1 is there. So, apply condition 2.
		      new position=(1+1,2-2)=(2,0)
		      5. position of number 5=(2-1,0+1)=(1,1)
		      6. position of number 6=(1-1,1+1)=(0,2)
		      7. position of number 7 = (0-1, 2+1) = (-1,3) // this is tricky, see condition 3 
		         new position = (0, 3-2) = (0,1)
			 8. position of number 8=(0-1,1+1)=(-1,2)=(2,2) //wrap around
			 9. position of number 9=(2-1,2+1)=(1,3)=(1,0) //wrap around
*/
#include<stdio.h> 
#include<string.h> 

// A function to generate odd sized magic squares 
void generateSquare(int n) 
{ 
    int magicSquare[n][n]; 

    // set all slots as 0 
    memset(magicSquare, 0, sizeof(magicSquare)); 

    // Initialize position for 1 
    int i = n/2; 
    int j = n-1; 

    int num;

    // One by one put all values in magic square 
    for (num=1; num <= n*n; ) 
    { 
	if (i==-1 && j==n) //3rd condition 
	{ 
	    j = n-2; 
	    i = 0; 
	} 
	else
	{ 
	    // 1st condition helper if next number  
	    // goes to out of square's right side 
	    if (j == n) 
		j = 0; 

	    // 1st condition helper if next number  
	    // is goes to out of square's upper side 
	    if (i < 0) 
		i=n-1; 
	} 
	if (magicSquare[i][j]) //2nd condition 
	{ 
	    j -= 2; 
	    i++; 
	    continue; 
	} 
	else
	    magicSquare[i][j] = num++; //set number 

	j++; i--; //1st condition 
    } 

    // Print magic square 
    printf("The Magic Square for n=%d:\nSum of "
	    "each row or column %d:\n\n",  n, n*(n*n+1)/2); 
    for (i=0; i<n; i++) 
    { 
	for (j=0; j<n; j++) 
	    printf("%3d ", magicSquare[i][j]); 
	printf("\n"); 
    } 
} 

    // Driver program to test above function 
int main() 
{ 
	    int n; // Works only when n is odd 

	    printf("Enter the n vlue: ");
	    scanf("%d", &n);

	    if(n % 2)
	    {
	        generateSquare (n); 

		
		}
		else
		    printf("Enter odd number:\n");
		    return 0; 
} 
