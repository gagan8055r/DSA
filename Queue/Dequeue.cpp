int Dequeue(Queue *q)

{
    int x=-1;
   if(q->rear==q->front)
   {
       cout<<"Queue is empty";
   }
   else
   {
       q->front++;
       x=q->t[q->front];
       
   }
   return x;
}
