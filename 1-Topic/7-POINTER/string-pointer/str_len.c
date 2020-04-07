/*
Tilte 		: program to find length of string
Auther 		:Isteyak
Organisation	:Emertxe
Algoritham	:




*/
#include <stdio.h>

#define size 100

size_t str_length(const char *);
int main()
{
    char name[size];
    char choice;
do
{

    //promt the user to enter the string;
    printf("Enter the string : ");

    scanf("%s", name);

    size_t r = str_length(name);
    printf("lenghth of %s is =  %zu\n", name, r);

    printf("Enter the choice to repeat : [y/Y] : not repeat [n/N] : ");

    scanf("\n%c", &choice);

}while(choice == 'y' || choice == 'Y');
    return 0;
}

size_t str_length(const char *s)
{
    const char *t = s;


    while (*t)
    {
	t++;
    }

    return t - s;
}
