#include <stdio.h>



int main()
{
    FILE *fptr;
char ch;

    fptr = fopen("text.txt", "r");

   printf("File offset is at ->   %ld\n", ftell(fptr));

   while((ch = fgetc(fptr)) != EOF)
   {
       if(ch == 'c')
       {
	   printf("ftell points to c at -> %ld\n", ftell(fptr));
       }
   }
   printf("File offset is at ->   %ld\n", ftell(fptr));

   fclose(fptr);

   return 0;
}
