/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


class Node
{
    public:
    
    int data;
     Node *next;
};

    Node *first=NULL;

void create(int A[],int n)
{
    int i;
    Node *t,*last;
    
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last =first;
    
    for(i=1;i<n;i++)
    {
    t=new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
        
    }
    
}


void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;;
        p=p->next;
        
    }
}
int main()
{
   int A[]={3,6,10,19};
   create(A,4);
   display(first);

    return 0;
}


