


void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}

void display(int arr[])
{   int y; 
    for( y=0;y<5;y++)
    {
        cout<<arr[y]<<endl;
    }
}






int main()
{
    int arr[5]={3,2,18,7,8};
    int i,j,n=5;
    for(i=0;i<n-1;i++)  //// Number of passes
    {
        for(j=0;j<n-1-i;j++) ////Number of Comparison
        {
            if(arr[i]>arr[i+1])  ////Comparison      //// Bubble sort
            {
                swap(arr[i],arr[i+1]);
                
            }
           
        }
 
        
        display(arr);
    return 0;
       }
