void Display(Queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.t[i];
        cout<<"\n";
    }
}
