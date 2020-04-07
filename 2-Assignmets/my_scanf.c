/*
Title		:program to implament my_scanf funtion
Author		:Isteyak
Organisation	:Emertxe
Algoritham	:
		1.promt the user to enter the number
		2.create my_scanf funtion
		2.1 use variadic pointion
		2.2 in my_scanf variadic funtion pass the format argument address of string 
		2.3 initilize ap pointer after format
		2.4 craate a buffer
		2.5 create one more pointer to point format
		2.6 through that pointer check the formate specifier
		2.7 according to variable type store their address in void type pointer q
		2.8 read the stdin buffer and store enterd value in buffer using fgets funtion
		2.9 convert that buffer string in integer
		2.10 fetch that integer value at pointed variable address using void pointer q 
		3. read that fetch value using printf funtion

*/

//inclustion of required library
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//prototype of used variadic funtion
void my_pf(const char *format, ...);
void my_sf(const char * format, ...);

int main()
{
    int i;//declarartion of variable
char c;
    my_pf("Enter a number : ");//promt the user to enter the string

    my_sf("%d", &i);//read the given number
    printf("enter the charcater :");
    my_sf("%c", &c);//read the given number

    my_pf("You entered number : %d", i);//print the given number
    my_pf("You entered character : %c\n", c);//print the given number

}

//defintion of my_scanf variadic funtion
void my_sf(const char *format, ...)
{

    va_list ap; void *q;//creating ap poineter and q pointer

    va_start(ap, format);//pointing ap pointer after format


    char buffer[20] = {'\0'};//creating a buffer

    const char *p = format;//creating one more pointer the point the format

    while(*p)//checking condition
    {
	switch(*++p)//switch case if the format specifier is matching with any case then take action accordingly
	{
	    case 'c'://logic to read the character
		q = va_arg(ap, char *);

		*(char *)q = fgetc(stdin);
		break;
	    case 'd'://logic to read the integer
		q = va_arg(ap, int *);//fetching the ap pointed address value in q pointer(ap is pointing at variable address)

		fgets(buffer, 20, stdin);//getting stdin entered value in buffer

		*(int *)q = atoi(buffer);//converting buffer string in integer form and fetching at variable address pointed by q(void type pointer)
		break;

	    case 'f'://logic to read the float variable
		q = va_arg(ap, float *);

		fgets(buffer, 20, stdin);

		*(float *)q = (float)atof(buffer);
		break;
	  case 'l'://logic to read double variable
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

//defintion of my_printf funtion
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

