
int main()
{
    char A[10]="decimal";
    char B[10]="medical";
    int H[26];
    int G[26];
    int i,j,count;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
      for(j=0;B[j]!='\0';j++)
    {
        G[B[j]-97]++;
    }
    for(i=0;i<26;i++)                   ///ANAGRAM OR NOT 
    {
        if(H[i]==G[i])
        {
           count++;
       }
    }
  if(count==26)
  {
      cout<<"ANAGRAM";
  }
  else
  {
      cout<<"NOT AN ANAGRAM";
  }
     return 0;
}
