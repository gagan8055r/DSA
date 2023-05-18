void Reverse(Array &arr)
{
    int i,j,temp;
    for(i=0,j=arr.length-1;i<j;i++,j--)
    {
        temp=arr.A[i];
        arr.A[i]=arr.A[j];
        arr.A[j]=temp;
    }
}
