#include <stdio.h>

#include "common.h"
#include "encode.h"
#include "decode.h"
int main(int argc, char **argv)
{
    EncodeInfo encInfo;

    // To store size of image and secret file
    uint src_img_size;

    char magic_string = '*';

    // Fill with sample filenames
    encInfo.src_image_fname = "beautiful.bmp";
    encInfo.secret_fname = "message.txt";
    encInfo.stego_image_fname = "stego_img.bmp";

    // Test argument
    if ((argc < 3))
    {
	print_usage_error("Invalid Arguments");
	return 1;
    }

    //Test check_operation_type and read_and_validate_encode_args
    if (read_and_validate_encode_args(argv, &encInfo) == e_failure)
    {
	print_usage_error("Invalid Entry. Not Supported");
	return 1;
    }


    if (check_operation_type(argv) == e_encode)
    {
	// Test open_files
	printf("INFO: Openig require file\n");
	if (open_files_encode(&encInfo) == e_failure)
	{
	    printf("ERROR: %s function failed\n", "open_files" );
	    return 1;
	}
printf("INFO: ## Encoding procedure started ##\n");
	// Test get_image_size_for_bmp
	encInfo.image_capacity = get_image_size_for_bmp(encInfo.fptr_src_image);
	//printf("INFO: Image size = %u\n", encInfo.image_capacity);

	// Test get_file_size
	printf("INFO: Checking for %s\n", encInfo.secret_fname);

	encInfo.size_secret_file = get_file_size(encInfo.fptr_secret);
	//printf("INFO: secret  size = %ld\n", encInfo.size_secret_file);
	printf("INFO: Not Empty\n");

	//Test check_capacity
	printf("INFO: Checking for %s capacity to handle %s\n", encInfo.src_image_fname, encInfo.secret_fname);
	if (check_capacity(&encInfo) == e_failure)
	{
	    printf("%s has less capacity: %u.\n", encInfo.src_image_fname, encInfo.image_capacity );
	    close_files_encode(&encInfo);
	    return 1;
	}

	printf("INFO: Done. Found OK\n");

	printf("INFO: Output File not mantioned creating stege0_img.bmp as default\n");

	//Test copy_bmp_header
	printf("INFO: Copying Image Header\n");
	if (copy_bmp_header(encInfo.fptr_src_image, encInfo.fptr_stego_image) == e_failure)
	{
	    printf("Did not copy\n");
	    close_files_encode(&encInfo);
	    return 1;
	}
	printf("INFO: Done\n");

printf("INFO: Encoding Magic string signature\n");
	if ( encode_secret_magic_string(&magic_string, &encInfo) == e_failure)
	{
	    printf("Did not encode magic_string.\n");
	    close_files_encode(&encInfo);
	    return 1;
	}
	printf("INFO: Done\n");

	//Test encode_secret_file_size
printf("INFO: Encoding %s file size\n", encInfo.secret_fname);
	if ( encode_secret_file_size(encInfo.size_secret_file, &encInfo) == e_failure)
	{
	    printf("Did not encode secret file size.\n");
	    close_files_encode(&encInfo);
	    return 1;
	}
	printf("INFO: Done\n");

	//Test encode_secret_file_data [includes null too]
printf("INFO: Encoding %s file data\n", encInfo.secret_fname);
	if ( encode_secret_file_data(&encInfo) == e_failure)
	{
	    printf("Did not encode secret file data.\n");
	    close_files_encode(&encInfo);
	    return 1;
	}

	printf("INFO: Done\n");
	//Test copy_remaining_img_data [includes null too]
printf("INFO: Copying Left Over Data\n");
	if ( copy_remaining_img_data(encInfo.fptr_src_image, encInfo.fptr_stego_image)  == e_failure)
	{
	    printf("Did not copy rest of the image data.\n");
	    close_files_encode(&encInfo);
	    return 1;
	}
	printf("INFO: Done\n");

	printf("INFO: ## Encoding Done Successfully ##\n");

	close_files_encode(&encInfo);
    }
    else if (check_operation_type(argv) == e_decode)
    {
	long size_secret_file;

	printf("INFO: ## Decoding procedure Started ##\n");

	// Test open_files_decode
	printf("INFO: Opening required file\n");
	if (open_files_decode(&encInfo) == e_failure)
	{
	    printf("ERROR: %s function failed\n", "open_files" );
	    return 1;
	}
printf("INFO: Decoding Magic string signature\n");
	if (decode_secret_magic_string(encInfo.fptr_secret, encInfo.fptr_stego_image) == e_failure)
	{
	    printf("Did not decode file data.\n");
	    close_files_decode(&encInfo);
	    return 1;
	}
	printf("INFO: Done\n");

	printf("INFO: Output file not mentioned Creating message.txt as default\n");

	printf("INFO: Opened %s\n", encInfo.secret_fname);

	printf("INFO: Opened ALL required file\n");

	//Test decode_secret_file_size
	//printf("stegno is: %s \n", encInfo.stego_image_fname);
	printf("INFO: Decoding file size\n");
	if (decode_secret_file_size(encInfo.fptr_stego_image, &size_secret_file) == e_failure)
	{
	    printf("Did not decode file size.\n");
	    close_files_decode(&encInfo);

	    return 1;
	}
printf("INFO: Done\n");

	//Test decode_secret_file_data
	//size_secret_file = 24;
	printf("INFO: Decoding file data\n");
	if (decode_secret_file_data(encInfo.fptr_secret, encInfo.fptr_stego_image, size_secret_file) == e_failure)
	{
	    printf("Did not decode file data.\n");
	    close_files_decode(&encInfo);
	    return 1;
	}
	printf("INFO: Done\n");
	close_files_decode(&encInfo);
	printf("INFO: ## Decoding done successfully##\n");
    }
    return 0;
}


