
int Max(Array &arr)
{   int max=arr.A[0];
    int i;
   for(i=1;i<arr.length;i++)
   
       if(arr.A[i]<max)
           return max=arr.A[i]; 
       
   
}
int Min(Array &arr)
{   int min=arr.A[0];
    int i;
   for(i=1;i<arr.length;i++)
  
       if(arr.A[i]>min)
           return arr.A[i]=min; 
}
