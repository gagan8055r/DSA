int SortedList(struct Node *p)
{
    
  
    int x=0;
 while(p!=NULL)
 {
        if(p->data>x)
        {
            x=p->data;
            p=p->next;
       
        }
        else
        {
        printf("array is not  sorted");    
        }
    
 }
   printf("array is  sorted");
}
