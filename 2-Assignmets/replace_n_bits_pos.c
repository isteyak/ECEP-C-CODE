#include <stdio.h>


int main()
{
  unsigned  int num, val, n, l, m, x, pos;


    //promt the user to enter the value of num
    printf("Enter the value of num\n");

    //read the given value of num
    scanf("%d", &num);
    
    //promt the user to enter the value of val
    printf("Enter the value of val\n");

    //read the given value of val
    scanf("%d", &val);
    
    
    //promt the user to enter the value of n
    printf("Enter the value of n\n");

    //read the given value of n
    scanf("%d", &n);

    //promt the user to enter the value of pos
    printf("Enter the value of pos\n");

    //read the given value of pos
    scanf("%d", &pos);

    //l = num >> n;

    //p = l << n;

    num = num & (((~0 >> n) << n) << pos);

   // m = val << ((sizeof(int) * 8) - n);
    
   // x = m >> ((sizeof(int) << 3) - n);

    val = val & (~(~0 << n) << pos);
     
    num = num | val;

    printf("result = %u\n", num);
}
