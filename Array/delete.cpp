void Delete(Array &arr,int index)
{
    int i;
    if(index>=0 && index<=arr.length)
    {
    //   int x=arr.A[index];
      for(i=index;i<arr.length;i++)
      {
          arr.A[i]=arr.A[i+1];
          arr.length--;
      }
    }
}
