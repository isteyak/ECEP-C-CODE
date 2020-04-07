#include <stdio.h>


#define SIZEOF(a) { \
			(char *)(&a + 1) - (char *)(&a);\
}

int main()
{
    int a = 10;
  double d;
  float f;
  char c;
  unsigned int r;
  long int l;

    printf("size of int : %lu\n", (SIZEOF(a))/sizeof(char));
    printf("size of char : %lu\n", (SIZEOF(c))/sizeof(char));
    printf("size of double : %lu\n", (SIZEOF(d))/sizeof(char));
    printf("size of float : %lu\n", (SIZEOF(f))/sizeof(char));
    printf("size of unsigned int : %lu\n", (SIZEOF(r))/sizeof(char));
    printf("size of long int : %lu\n", (SIZEOF(l))/sizeof(char));

}
