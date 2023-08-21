 long long maxSubarraySum(int arr[], int n){
        
     long int sum=0;
    long  int maxi=arr[0];
    long  int i;
     for(i=0;i<n;i++)
     {
         sum=sum+arr[i];
         
         if(maxi<sum)
         {
             maxi=sum;
         }
         else
         {
             maxi=maxi;
         }
         
         if(sum<0)
         {
             sum=0;
         }
         
     }
     return maxi;
        
    }
