








status encode_secret_file_size(long file_size, EncodeInfo *encInfo)
{
    char MSBbits[32] = {0};

    int i, j readptr, writeptr, iterptr, temp;


    for(i = 0; i < 32; i++)
    {
	MSBbits[i] = (file_size & 1 << 31);

	file_size >>= 1;
    }
    MSBbits[i] = '\0';


}










