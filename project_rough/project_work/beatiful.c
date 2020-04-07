


#include <stdio.h>

typedef enum
{
    e_success,
    e_failure
}status;


status copy_bmp_header(FILE  *fptr_src_image, FILE *fptr_dest_image);
int main()
{
    FILE *fptr_image = fopen("1_beautiful.bmp", "r");
    FILE *fptr_image_dest = fopen("1_beautiful_hearder.bmp", "w");
    FILE *fptr_secret = fopen("secret.txt", "r");

    int i = 0;

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

	copy_bmp_header(fptr_image, fptr_image_dest);

	while(feof(fptr_secret) == '\0')
	{
	    printf("hello %d\n", i);
	    i++;
	}


}

status copy_bmp_header(FILE  *fptr_src_image, FILE *fptr_dest_image)
{
    char image_header_data[55];

    int readptr, writeptr, i, j[8];

    if((readptr = fread(image_header_data, 1, 54, fptr_src_image)) != 54)
    {
	if(ferror(fptr_src_image) != 0)
	{
	    fprintf(stderr, "reading error. \n");

	    clearerr(fptr_src_image);

	    return e_failure;
	}
    }

    if((writeptr = fwrite(image_header_data, 1, readptr, fptr_dest_image)) != readptr)
    {
	return e_failure;
    }

    printf("%d**  readptr\n", readptr);
    i = 0;
    while(i != 55)
    {
    printf("%d  image_header_data %d \n", image_header_data[i], i+1);
    i++;
    }

/*
	fseek(fptr_dest_image, 3L, SEEK_SET);

	fread(j, 1, 4, fptr_dest_image);

	printf();
*/
    return e_success;
}




