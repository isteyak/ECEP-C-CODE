/*
program			:program to swap variable using macro concept

Author			:Isteyak
Organisation		:Emetxe
algoritham		:
			1.promt the user to enter the variable
			2.store that variable in datatype
			3. call macro expansion to swap that variable
			4.//logic
			5. pass datatype and variable value in macro expansion 
					type temp;\
					temp  = a;\
					a = b; \
					b = temp;\
*/


//inclusion of standard libarary
#include <stdio.h>

//macro expansion logic to swap variable
#define GENERIC_SWAP(type, a, b)   { \
					type temp;\
					temp  = a;\
					a = b; \
					b = temp;\
\
				   }
//
int main()
{
    //decalarion of variable
    char a, b;
    int c, d;
    double e , f;
    char *s = "isteyak", *r = "ansari";

    int option;
    //promt the user to enter the option
    printf("Enter the option to swpa the variable \n1. char data swap\n2. int data swap\n3. double data swap\n4. string swap : ");

    //read the given option
    scanf("%d", &option);

    switch(option)
    {
	case 1:

	    //promt hte user to enter the character
	    printf("Enter char a and char b : ");
	    //read the given character
	    scanf("\n%c\n%c", &a, &b);
	    //print chacter before swap
	    printf("before : a: %c\tb : %c\n", a, b);

	    GENERIC_SWAP(char, a, b);//call the swap macro expansion
	    //print hte character after swap
	    printf("after : a : %c\tb : %c\n", a, b);
	    break;
	case 2:
	    //promt the user to enter the int variable
	    printf("Enter int c and int d : ");
	    //read the given int
	    scanf("%d%d", &c, &d);

	    //print after swap
	    printf("before : c: %d\td : %d\n", c, d);

	    GENERIC_SWAP(int, c, d);//call swap macro expansion
	    //print after swap
	    printf("after : c : %d\td : %d\n", c, d);
	    break;

	case 3:
	    //promt hte user to enter the double vriable
	    printf("Enter double e and double f : ");

	    //read the given double variable
	    scanf("%lf%lf", &e, &f);
	    //print before swap
	    printf("before : e : %lf\tf : %lf\n", e, f);

	    GENERIC_SWAP(double, e, f);//call swap macro expansion
	    //print after swap
	    printf("after : e : %lf\tf : %lf\n", e, f);
	    break;

	case 4:
	    //promt hte uer to enter the string variable
	    #if 0
	    printf("Enter string s and string r : ");

	    scanf("%s%s", s, r);//read the string
#endif
	    //print before swap
	    printf("before : s : %s\tt : %s\n", s, r);

	    GENERIC_SWAP(char *, s, r);//call swap macro expansion
		//print after swap
	    printf("after : s : %s\tt : %s\n", s, r);
	    break;

	default:
	    printf("Enter a valid option|\n");
    }

}
