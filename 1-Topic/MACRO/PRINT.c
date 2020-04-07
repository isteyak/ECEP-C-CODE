#include <stdio.h>

#define PRINT(x, y) printf("value : "#x" = "#y"\n", x)


int main()
{
    int x = 4;
    float f = 3.14;
    char ch = 'A';
     

     PRINT(x, %d);
     PRINT(f, %f);
     PRINT(ch, %c);


}
