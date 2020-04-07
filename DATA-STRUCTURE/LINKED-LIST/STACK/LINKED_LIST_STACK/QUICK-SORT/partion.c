int partition(int *, int, int);

int partition(int *A, int start, int end)
{
    int piv = A[end];
    int i;
    int pInd = start;

    for(i = start; i < end; i++)
    {
	if(A[i] <= piv)
	{
	    swap(A + i, A + pInd);
	    pInd = pInd + 1;
	}
    }

    swap(A + pInd, A + end);

    return pInd;
}
