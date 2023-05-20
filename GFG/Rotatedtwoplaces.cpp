int main()
{
    
    char A[7]="amazon";
    char B[7]="azonam";
    char C[7];
    int i,j;
    
    
    for(i=2,j=0;i<6;i++,j++)
    {
        C[j]=A[i];
    }
    
    for(i=0,j=4;i<6,j<6;i++,j++)
    {
        C[j]=A[i];
    }                                            //////Rotated by two places
    
    for(j=0;j<6;j++)
    {
        cout<<C[j];
    }
    cout<<endl;
    
    for(i=0;i<6;i++)
    {
        
    if(C[i]==B[i])
    {
        
   break;   
    }
    else
    {
        cout<<"Need not to be replaced by two places";
    }
    }
    cout<<"Success"<<endl;
    return 0;
}
