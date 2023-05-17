
int main()
{
   int arr[5]={16,17,4,5,2};
   int i,j;
   int n=5;
   for( i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]<arr[j])
           {
               cout<<arr[j]<<endl;
               break;
           }
       }
   
   }
      cout<<arr[i]<<endl;
    return 0;
}
