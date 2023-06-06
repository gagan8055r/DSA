
void push(Stack *st,int x)
{
    if(st->top==st->size-1)
    {
        cout<<"stack is full";
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(Stack *st)
{
  int x=-1;    
    if(st->top==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
     x=st->s[st->top];
     st->top--;
    
    }
    return x;
}
