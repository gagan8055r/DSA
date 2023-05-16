void Insert(Array &arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr.length)
    {
        for(i=arr.length;i>index;i--)
        {
            arr.A[i]=arr.A[i-1];
            
        }
        arr.A[index]=x;
        arr.length++;
        
    }
}
