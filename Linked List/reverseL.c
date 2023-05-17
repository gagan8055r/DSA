 int ReverseL(struct Node *p)
    { 
        
        p=first;
        struct Node *q=NULL,*r=NULL;
        
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        
        first=q;
    
    
        
    }
