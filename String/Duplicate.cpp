
int main()

{
    char A[]="ffindingg";
    int i,j,count;
    char H[26];
    
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
        
    }
    
    for(j=0;j<26;j++)             //// finding Duplicate
    {
        if(H[j]>1)
        {
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
