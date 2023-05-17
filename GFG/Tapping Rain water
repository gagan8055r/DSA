   int main()               
{
int arr[4]={7,4,0,9};
int i,j;
  int n=4;
  int a,b,p;
 int maxL;
  int count=0;
          int count1=0;
  for( i=0;i<n-1;i++)
  {
      for(j=i-1;j<n;j++)
      {
              if(arr[i]<arr[j])
              {
                 maxL=arr[i];
                
                break;
        
              }
              i=0;
              if(maxL<arr[i])
              {
                //   cout<<arr[i]<<endl;
                  a=arr[i];
              }
                  i++;
           
      }
  }
  
//   cout<<arr[i];
 
  
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]<arr[j])
          {
           
              break;
          }
          
          
          
      }
  }
       b=arr[j];
      
    //   cout<<a<<endl<<b<<endl;
      
      if(a<b)
      
      {
          p=a;
      }
      else
      {
          p=b;
      }
      
      
      for(int t=0;t<n;t++)
      {
         
         count=p-arr[t];
        if(count<0)
        {
            break;
        }
          count1=count1+count;
      }
      cout<<count1;
    return 0;
    
}
