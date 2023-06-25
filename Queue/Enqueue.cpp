void Enqueue(Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"Queue is full";
        
    }
    else
    {
        q->rear++;
        q->t[q->rear]=x;
    }
}
