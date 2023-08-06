  
       void Selection(int arr[],int n)
       {
           int i,j,k;
           
           for(i=0;i<n-1;i++)
           {
               for(j=k=i;j<n;j++)
               {
                   if(arr[j]<arr[k])
                   {
                       k=j;
                   }
                   
               }
               swap(arr[i],arr[k]);
           }
       }
       
