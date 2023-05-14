int DeleteRandom(struct Node *p,int pos)
{
    struct Node *q=NULL;
    for(int i=0;i<pos-1;i++)
    {
        q=p;
        p=p->next;
    }
int x=p->data;
    q->next=p->next;
}

