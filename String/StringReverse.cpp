int main()
{
    char name[]="gagan";
    char name1[100];
    int i,j;
 for(i=0;name[i]!='\0';i++)
    {
        
    }
  i=i-1;
  for(j=0;i>=0;i--,j++)   ///////String Reversal
  {
      name1[j]=name[i];
  }
  name1[j]='\0';
 cout<<name1;
 
 return 0;
}
