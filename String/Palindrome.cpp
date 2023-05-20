
int main()
{
    
    char name[10]="MALYALAM";
    char B[10];
    int i=0;
    int j=0;
    for(i=0;name[i]!='\0';i++)
    {
        
    }
   i=i-1;
   
   for(j=0;i>=0;i--,j++)                         /////PALINDROME CHECK
   {
       B[j]=name[i];
   }
   
   B[j]='\0';
   
//   cout<<B;
   
  for(i=0,j=0;name[i]!='\0',B[j]!='\0';i++,j++)
  {
      if(name[i]==B[j])
      {
          break;
      }
  }
  cout<<"PALINDROME";
  
}



