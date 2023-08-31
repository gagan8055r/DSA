  int arr[]={662,78,752,98,58,147,75};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=-1;
    int sum=0;
    while (j<n-1)
    {
        j++;
        for(i=0;i<n;i++)
        {
            // sum=0;
            sum=sum+arr[i];
        }
        
        cout<<sum-arr[j]<<endl;
        sum=0;
    }
