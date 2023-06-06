


struct Node
{
    
    char data;
    struct Node *next;
}*top=NULL;


void push(char x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    
    if(t==NULL)
    {
        printf("stack is full");
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop()
{
    char x=-1;
    struct Node *t;
    
    
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
        
    }
    return x;
}

void display()
{
    struct Node *t;
    t=top;
    while(t!=NULL)
    {
        printf("%d\n",t->data);
        t=t->next;
    }
}


int isBalance(char *alp)

{
   int i;
   
   for(i=0;alp[i]!='\0';i++)
   {
       if(alp[i]=='40' || alp[i]=='['||alp[i]=='{')
       push(alp[i]);
       else if(alp[i]=='41'||alp[i]==']'||alp[i]=='}')
       {
           if(top==NULL)
           return 0;
          pop();
       }
       
   }
   if(top==NULL)
    return 1;
   else
   return 0;
   
}
int main()
{
    // push(10);
    // push(12);
    // push(11);
    // display();
char *alp="{[a+b]*(c-d)}";

printf("%d",isBalance(alp));


    return 0;
}
