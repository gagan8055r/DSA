
    char s[]="i love diving";
    int i=0;
    int j;
  int n=sizeof(s)/sizeof(s[0]);
    for(j=0;j<n;j++)
    {
        if(s[j]==' ' || s[j]=='\0' )
        {
            int s1=i;
            int l=j-1;
            while(s1<l)
            {
                
            swap(&s[s1],&s[l]);
            s1++;
            l--;
            }
            i=j+1;
        }          
        
        
    }
    
