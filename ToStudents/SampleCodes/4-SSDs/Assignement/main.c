#include "pic_specific.h"
#include "main.h"
#include "ssd_display.h"

static unsigned char ssd[MAX_SSD_CNT];

void init_config(void)
{
	init_ssd_control();
}

void main(void)
{
        unsigned int wait;
	init_config();
 	int A[10] = {0xE7, 0x21, 0xCB, 0x6B, 0x2D, 0x6E, 0xEE, 0x23, 0xEF, 0x6f};
	int i=0,j=0,k=0,l=0;
	while(1)
	{

	   i++;

	   if(i == 10)
	   {
	       j++;
	       i=0;
	   }
	       if(j == 10)
	       {
	          k++;
		  j=0;
	       }
	       if(k == 10)
	       {
		   l++;
		   k=0;
	       }
	       if(l == 10)
	       {
		   i=0;
		   j=0;
		   k=0;
		   l=0;
	       }




	       ssd[3] = A[i];
	       ssd[2] = A[j];
	       ssd[1] = A[k];
	       ssd[0] = A[l];
	       display(ssd);




	}
}
