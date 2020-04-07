#include <stdio.h>


int main(int argc, char *argv[])
{
    printf("argc = %d\n", argc);


    int i;
    for(i = 0; i < argc; i++)
    {
	printf("argv[%d] = %s\n", i, argv[i]);
    }
    char s[5];
//    s = argv[3];
for(i = 0; *(argv[2]+i) != '\0'; i++)
{
printf("%c is char\n", *(argv[2]+i));
s[i] = *(argv[2] + i);
}
s[i] = '\0';
printf("%s is argv[2]\n", s);

    return 0;
}
