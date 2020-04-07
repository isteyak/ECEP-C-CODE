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
	init_config();

	while(1)
	{

	    
	    for(k=0; k<4; k++)
	    {
		for(j
		ssd[0] = ZERO;
		display(ssd);
		ssd[0] = ONE;
		display(ssd);
		ssd[0] = TWO;
		display(ssd);
		ssd[0] = THREE;
		display(ssd);
		ssd[0] = FOUR;
		display(ssd);
		ssd[0] = FIVE;
		display(ssd);
		ssd[0] = SIX;
		display(ssd);
		ssd[0] = SEVEN;
		display(ssd);
		ssd[0] = EIGHT;
		display(ssd);
		ssd[0] = NINE;
		display(ssd);
	    }
	}
}
