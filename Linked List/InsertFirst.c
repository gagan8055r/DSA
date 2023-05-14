
int InsertFirst(struct Node *p)
{
    struct Node *y;
    y=(struct Node *)malloc(sizeof(struct Node));
    y->data=10;
    y->next=first;
    first=y;
}
