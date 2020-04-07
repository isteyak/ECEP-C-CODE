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
	int A[10] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
	int i=9,j=9,k=9,l=9;
	while(1)
	{

	    i--;

	    if(i == -1)
	    {
		j--;
		i=9;
	    }
	    if(j == -1)
	    {
		k--;
		j=9;
	    }
	    if(k == -1)
	    {
		l--;
		k=9;
	    }
	    if(l == -1)
	    {
		i=9;
		j=9;
		k=9;
		l=9;
	    }




	    ssd[3] = A[i];
	    ssd[2] = A[j];
	    ssd[1] = A[k];
	    ssd[0] = A[l];
	    display(ssd);




	}
}
