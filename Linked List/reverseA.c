int ReverseA(struct Node *p)
{
   
    // struct Node *B;
    int B[5];
    // B=(struct Node *)malloc(sizeof(int )*(Count(p)));
    int i;
    while(p!=NULL)
    {
        
   
        B[i]=p->data;
        p=p->next;
        i++;
    }
    
    p=first;
    i--;
  while(p!=NULL)
  {
       
        p->data=B[i];
        p=p->next;
        i--;
  }
}
