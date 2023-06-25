
class Queue
{
    
    public:
    
    int size;
    int front;
    int rear;
    int *t;
};


int main()
{
   Queue q;
   int siz;
   cout<<"Enter the size \n";
   cin>>siz;
   Create(&q,siz);
  Enqueue(&q,4);
    Enqueue(&q,5);
      Enqueue(&q,14);
        Enqueue(&q,7);
        cout<<"Before\n";
        Display(q);
  Dequeue(&q);
  cout<<"After";
  Display(q);
   
}
