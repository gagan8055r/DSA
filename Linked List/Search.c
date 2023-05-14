int Search(struct Node *p,int key)
{
    struct Node *q;
    while(p!=NULL)
{
    if(key==p->data)
    {
        q->next=p->next;
        p->next=first;
        first=p;
    }
    
    q=p;
    p=p->next;
}
return 0;
}
