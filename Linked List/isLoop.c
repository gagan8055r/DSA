
int isLoop(struct Node *p)

{
    struct Node *q=first;
    
   
do{   
    p=p->next;
    
    q=q->next;
    q=q!=NULL?q->next:NULL;
    
}while(p && q &&p!=q);
    
        if(p==q)
    printf("true");
        else
        printf("false");
    
    
    
    
    return 0;
    
    
}
