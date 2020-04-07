#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "common.h"
#include "types.h"

/* Function Definitions */

/* Get error message 
 * Input: Error message
 * Description: prints Usage format and error message
 */
void print_usage_error(char * message)
{
    fprintf(stderr, "ERROR: %s \n", message);
    fprintf(stderr, "USAGE: lsb_steg -e secret.txt image.bmp encrypted.bmp \n");
    fprintf(stderr, "USAGE: lsb_steg -e secret.txt image.bmp \n");
    fprintf(stderr, "USAGE: ./lsb_steg -d encrpted.bmp message.txt\n");
    fprintf(stderr, "USAGE: ./lsb_steg -d encrpted.bmp \n");
}

void print_file_error(char * message)
{
    perror("fopen");
    fprintf(stderr, "ERROR: Unable to open file %s\n", message);
}


/* Check operation type
 * Input: argv[] from command line 
 * Output: OperationType for encoding or decoding
 * Description: check for valid optional argument and 
 *  return the appropriate enum values
 */
OperationType check_operation_type(char *argv[])
{
    if (strcmp(argv[1], "-e") == 0)
    {
	//return e_encode
	return e_encode;
    }
    else if (strcmp(argv[1], "-d") == 0)
    {
	//return e_decode
	return e_decode;
    }
    // Neither return e_unsupported
    return e_unsupported;
}

/* Read and validate Encode args from argv 
 * Input: argv[] from command line and EncodeInfo address
 * Output: Status success or failure
 * Description: check for valid optional argument and
 *  read the appropriate argv values for filenames
 */
Status read_and_validate_encode_args(char *argv[], EncodeInfo *encInfo)
{
    char str[10];
    int i, j, k = 0;;
    //Test check_operation_type
    if (check_operation_type(argv) == e_encode)
    {
	// take this as secret file
	encInfo->secret_fname = argv[2];
for(i = 0; *(argv[2] + i) != '\0'; i++)
{

	str[i] = *(argv[2] + i); 
}
str[i] = '\0';

for(i = 0; str[i] != '\0'; i++)
{
    if(str[i] == '.')
    {
	j = i;
    
    }

}
for( ;str[j] != '\0'; j++)
{
    encInfo->extn_secret_file[k] = str[j];
    k++;
}
encInfo->extn_secret_file[k] = '\0';

printf("%s is str\n", str);
printf("%s is extern str\n", encInfo->extn_secret_file);

//	char *token = strtok(argv[2], ".");
//	printf("%s   is ", token);
//printf("%s   * ", encInfo->secret_fname);
//char *token = strtok(encInfo->secret_fname, "\0");
//printf("%s is token\n", token);
//	encInfo->extn_secret_file
	if (argv[3] != NULL)
	{
	    // take 3rd arg as bmp file if present
	    encInfo->src_image_fname = argv[3];
	}
	// No failure return e_success
	return e_success;
    }
    else if (check_operation_type(argv) == e_decode)
    {
	// take this as encrypted file
	encInfo->stego_image_fname = argv[2];
	if (argv[3] != NULL)
	{
	    // take 3rd arg as secret message file if present
	    encInfo->secret_fname = argv[3];
	}
	// No failure return e_success
	return e_success;

    }
    else if (check_operation_type(argv) == e_unsupported)
    {
	return e_failure;
    }

    return e_failure;
}


