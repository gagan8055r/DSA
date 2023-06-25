void Create(Queue *q,int size)
{
    q->size=size;
    q->t=new int(q->size);
   q->front=-1;
   q->rear=-1;
}
