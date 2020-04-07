#include <stdio.h>



int main()
{
    FILE *fptr;
char ch;

    fptr = fopen("/etc/shells", "r");

   printf("File offset is at ->   %ld\n", ftell(fptr));

   while((ch = fgetc(fptr)) != EOF)
   {
       fputc(ch, stdout);
   }
   printf("File offset is at ->   %ld\n", ftell(fptr));

   fclose(fptr);

   return 0;
}
