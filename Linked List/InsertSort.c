
int InsertSort(struct Node *p)
{
    struct Node *y,*q=NULL;
    y=(struct Node *)malloc(sizeof(struct Node));
    y->data=3;
    
    while(y->data>p->data )
    {
        q=p;
        p=p->next;
    }
    y->next=q->next;
    q->next=y;
}
