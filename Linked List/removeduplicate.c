
int  RemoveDuplicate(struct Node *p)
{
    
    
    struct Node *q=p->next;
    
    while(q!=NULL)
    {
        
   
    if(q->data!=p->data)
    {
        p=q;
    q=q->next;
    }
    else
    {
    p->next=q->next;
        q=p->next;
    }
    }
    

}
