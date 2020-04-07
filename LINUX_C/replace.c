

#include <stdio.h>



int main()
{
    char s[] = "hello";
int i = 0;
    int temp;
while(s[i])
{
    

    temp = s[i];
    s[i] = temp;

    i++;

}
s[i] = '\0';
i = 0;
while(s[i])
{
printf("%d, ", s[i]);
i++;
}}
