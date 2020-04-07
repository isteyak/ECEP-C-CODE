


#include <stdio.h>



int main()
{
    FILE *fptr_image = fopen("1_beautiful.bmp", "r");

	unsigned int image_size;
    if(fptr_image == NULL)
    {
	printf("error file could not open\n");
    }
    else


	fseek(fptr_image, 0L, SEEK_END);

	image_size = ftell(fptr_image);

	fseek(fptr_image, 0L, SEEK_SET);

	printf("%u**\n", image_size);


}
