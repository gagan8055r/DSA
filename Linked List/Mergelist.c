void Merge(struct Node *p,struct Node *q)
{
    struct Node *last=NULL;
    if(first->data<second->data)
{
    third=first;
    last=first;
    first=first->next;
    last->next=NULL;
    
}    
    
    else{
        third=second;
    last=second;
    second=second->next;
    last->next=NULL;
    
    
    }
    
    while(first!=NULL && second!=NULL)
    {
        
    
    
    if(first->data<second->data)
    {
        last->next=first;
        last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
     
        last->next=second;
        last=second;
        second=second->next;
        last->next=NULL;
    }
    }
    
    if(first!=NULL)
    {
        last->next=first;
    }
    else
    {
        last->next=second;
    }
    
    

}


    
