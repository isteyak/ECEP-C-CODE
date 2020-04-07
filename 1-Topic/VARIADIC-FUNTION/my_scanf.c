#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void my_pf(const char *format, ...);
void my_sf(const char * format, ...);
int main()
{
    char ch;
    int i;

    my_pf("enter a character : ");

    my_sf("%c", &ch);

    my_pf("the value of ch : %c\n", ch);

    getchar();
    my_pf("enter a num : ");
    my_sf("%d", &i);
//    getchar();
    my_pf("the value of i : %d\n", i);
    float f;
    my_pf("enter the value of f : ");
    my_sf("%f", &f);
    my_pf("the value of f : %f\n", f);

    double d;
    my_pf("enter the value of d : ");
    my_sf("%lf", &d);
    my_pf("the value of d : %lf\n", d);

}

void my_sf(const char *format, ...)
{

    va_list ap; void *q;
    va_start(ap, format);


    char buffer[20] = {'\0'};
    const char *p = format;

    while(*p)
    {
	switch(*++p)
	{
	    case 'c':
		q = va_arg(ap, char *);

		*(char *)q = fgetc(stdin);
		break;
	    case 'd':
		q = va_arg(ap, int *);

		fgets(buffer, 20, stdin);

		*(int *)q = atoi(buffer);
		break;

	    case 'f':
		q = va_arg(ap, float *);

		fgets(buffer, 20, stdin);

		*(float *)q = (float)atof(buffer);
		break;
	  case 'l':
	  	switch(*++p)
		{
		    case 'f':
		    	q = va_arg(ap, double *);

			fgets(buffer, 20, stdin);
			*(double *)q = atof(buffer);
			break;

		    	    
		}

	}
    }
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

