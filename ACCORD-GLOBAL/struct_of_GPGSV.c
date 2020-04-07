

#include <stdio.h>



struct GPGSV
{

    char str[6];
    unsigned int total_no_of_sentences:4;
    unsigned int sentences_no:4;
    unsigned int total_no_of_satellite:4;
    unsigned int satellite_id_no:8;
    unsigned int elevation_degree:8;
    unsigned int azimuth_degree:9;
    unsigned int SNR_r:8;
    unsigned int SV23;
    unsigned int SV4:24;
};


int main()
{
    struct GPGSV gpgsv;
int option;
    printf("Enter the data of GPGSV \n1. name of GPG.. \n2. total number of sentences\n3.sentences number\n4.total number of satellite\n5.satellite id number\n6.elevation degree\n7.azimuth degree\n8.SNR_r\n9.2_3_sv\n10.4_sv2\nEnter the option : ");
scanf("%d", &option);
unsigned int i;

printf("Size of struct GPGSV is = %u", sizeof(gpgsv));
    switch(option)
    {
	case 1:
		printf("Enter the data : ");
		scanf("%d", &i);
		gpgsv.total_no_of_sentences = i;

		break;

	default:
		printf("Invalid option\n");
		break;
    }


//scanf("%s", gpgsv.str);

//printf("%s\n", gpgsv.str);
printf("%u\n", gpgsv.total_no_of_sentences);

return 0;
}

