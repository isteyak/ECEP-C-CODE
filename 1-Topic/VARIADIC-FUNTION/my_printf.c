#include <stdarg.h>
#include <stdio.h>


void my_pf(const char *, ...);

int main()
{
    char ch = 'A';

    int a = 10;
    float f = 1.2;
    double d = 12.23;

    my_pf("the value of ch : %c\n", ch);
    my_pf("the value of a : %d", a);
    my_pf("the value of f : %f", f);
    my_pf("the value of f : %lf", d);
}


void my_pf(const char *format, ...)
{
    va_list ap;
 char ch;int a;
 float f;
 double d;
 char buffer[10] = {'\0'};
    va_start(ap, format);

    const char *p = format;

    while(*p)
    {
	if (*p == '%')
	{
	    switch(*++p)
	    {
		case 'c':
			ch = va_arg(ap, int);
			putchar(ch);
			break;
		case 'd':
			a = va_arg(ap, int);

			sprintf(buffer, "%d", a);
			puts(buffer);
			memset(buffer, '\0', 10);
			break;
		case 'f':
			f = (float)va_arg(ap, double);

			sprintf(buffer, "%f", f);
			puts(buffer);
			memset(buffer, '\0', 10);
			break;
		case 'l':
			switch(*++p)
			{
			    case 'f':
			    		d = va_arg(ap, double);
			sprintf(buffer, "%lf", d);
			puts(buffer);
			memset(buffer, '\0', 10);
			break;

			}
	    }
	}
	else
	{
	    putchar(*p);
	}
	p++;
    }
}
