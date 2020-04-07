/*

title		:// A simple C++ program for implementation of atoi
Author		:Isteyak
Organisation	:Emertxe
Algoritham	:
		2.call the read_int funtion and store the return value in any variable
		3.in read funtion use getchar() funtion to read the character given by user
		4.logic
                //run the while loop till the last charcter in the buffer!
		        for (i = 0; str[i] != '\0'; ++i)
			{

			    if(str[i] >= '0' && str [i] <= '9')
			    {
			            res = res*10 + str[i] - '0';
				      
			    }
			   else
				return res;
			}
			return res;
*/
//inclusion of standard libary
#include <stdio.h>
  
  // A simple atoi() function
  //defintion of atoi funtion
  int myAtoi(char *str)
  {
          int res = 0, i; // Initialize result
	    
	  // Iterate through all characters of input string and
	  // update result
	  for (i = 0; str[i] != '\0'; ++i)
	  {

	      if(str[i] >= '0' && str [i] <= '9')
	      {
		  res = res*10 + str[i] - '0';

		  // return result.
		  //return res;
		  //printf("%d\n", res);
	      }
	      //return res;
	      else
		  return res;
	  }
	  return res;
  }

// Driver program to test above function
int main()
{
    char str[50];

    //promt the user to enter the string
    printf("enter the string number : ");

    scanf("%s", str);

    int val = myAtoi(str);//calling to atoi funtion and storing its return value in a variable
    printf ("converted string to integer is : %d \n", val);
    return 0;
}
