class Stack
{
    public:
    int size;
    int top;
    int *s;
    
};

void create(Stack *st)
{
     cout<<"Enter size";
 cin>>st->size;
 st->s=new int[st->size];
 st->top=-1;
}
