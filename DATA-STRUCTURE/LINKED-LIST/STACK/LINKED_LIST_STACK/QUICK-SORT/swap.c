int swap(int *, int *);

int swap(int *A, int *D)
{

    int temp;

    temp = *A;

    *A = *D;

    *D = temp;

    return 0;
}
