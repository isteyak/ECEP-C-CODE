#include <stdio.h>


int main()
{
  unsigned  int num, val, n, l, m, x, p;


    //promt the user to enter the value of num
    printf("Enter the value of num\n");

    //read the given value of num
    scanf("%d", &num);
    
    //promt the user to enter the value of val
    printf("Enter the value of val\n");

    //read the given value of num
    scanf("%d", &val);
    
    
    //promt the user to enter the value of n
    printf("Enter the value of n\n");

    //read the given value of num
    scanf("%d", &n);

    //l = num >> n;

    //p = l << n;

    num = num & ((~0 >> n) << n);

   // m = val << ((sizeof(int) * 8) - n);
    
   // x = m >> ((sizeof(int) << 3) - n);

    val = val & ~(~0 << n);
     
    num = num | val;

    printf("result = %u\n", num);
}
