void insertSort(Array &arr,int key)
{
    int i=arr.length-1;
    

    while(arr.A[i]>key)
    {
       
        arr.A[i+1]=arr.A[i];
        i--;
    }
        arr.length++; 
    arr.A[i+1]=key;
}
