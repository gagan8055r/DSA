int main()
{   int d=0;
int c=0;
int i=0;
int count=0;
    int A[10]={1, 3, 5, 8, 9, 6, 7, 6, 8, 9} ;
    
    for(i=0;i<10;i++)
    {
         c=A[i];
        d=i+c;
        
        while(d<10 )
        {
            count++;
     break;   
        }
        
    }
    cout<<count<<endl;
    return 0;
}
