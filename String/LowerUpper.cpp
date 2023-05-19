for(i=0;name[i]!='\0';i++)
{
    if(name[i]>=97 && name[i]<=122)
    {
      char  dif= name[i]-32;
        
    cout<<dif<<endl;
        
    }
    if(name[i]>=65 && name[i]<=90)
    {
      char  dif1= name[i]+32;           ///lowercase to upper
        
    cout<<dif1<<endl;
        
    }
