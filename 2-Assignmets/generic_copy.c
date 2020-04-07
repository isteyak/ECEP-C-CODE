#include<stdio.h>

void copy(void *src, void *dest, int size)
{
    char *s, *d;
    int i;

    s = src;
    d = dest;

    for(i = 0; i < size; i++)
    {
	*(char *)src = *(char *)dest;
	src = src + 1;
	dest = dest + 1;
    }
}

int main(int argc, char *argv[])
{
    void *base;
    int i = 10;
    int j = 20;

    printf("%d, %d\n", i, j);
    copy(&i, &j, sizeof(int));
    printf("%d, %d\n", i, j);

    copy(argv, base, sizeof(char *));

    return 0;
}
