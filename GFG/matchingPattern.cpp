int main()
{
    
    int arr[3][3]={{1,4,5},{7,3,2},{9,8,0}};
    int B[9];
    int i,j,t;
    int n=3;
    int big=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            B[t]=arr[i][j];
            t++;
       
        }
    }
    
    for(t=0;t<9;t++)
    {
        
        if(big>B[t])
        {
            big=B[t];
            
        cout<<B[t];
        }
    }
    
    
    
    return 0;
}
