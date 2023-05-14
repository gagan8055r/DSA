int InsertRandom(struct Node *p,int pos)
{
   struct Node *y;
   y=(struct Node *)malloc(sizeof(struct Node));
   y->data=20;
   
   for(int i=0;i<pos-1;i++)
   {
       p=p->next;
   }
   y->next=p->next;
  p->next=y;
    
}
