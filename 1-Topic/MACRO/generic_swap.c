#include <stdio.h>


#define GENERIC_SWAP(type, a, b)   { \
					type temp;\
					temp  = a;\
					a = b; \
					b = temp;\
\
				   }

int main()
{
    char a = 'A', b = 'B';

    printf("before : a: %c\tb : %c\n", a, b);

    GENERIC_SWAP(char, a, b);

    printf("after : a : %c\tb : %c\n", a, b);

    int c = 10, d = 20;
    
    printf("before : c: %d\td : %d\n", c, d);

    GENERIC_SWAP(int, c, d);

    printf("after : c : %d\td : %d\n", c, d);
    
    double e = 12.23, f = 34.45;
    
    printf("before : e : %lf\tf : %lf\n", e, f);

    GENERIC_SWAP(double, e, f);

    printf("after : e : %lf\tf : %lf\n", e, f);

    char *s = "gam";

    char *t = "rav";


    printf("before : s : %s\tt : %s\n", s, t);

    GENERIC_SWAP(char *, s, t);

    printf("after : s : %s\tt : %s\n", s, t);



}
