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
		ssd[3] = ZERO;
		ssd[2] = ONE;
		ssd[1] = TWO;
		ssd[0] = THREE;
        
		display(ssd);
	}
}
