struct Node
{
  int data;
  struct Node *next;
} *first;



void
create (int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = (struct Node *) malloc (sizeof (struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++)
    {
      t = (struct Node *) malloc (sizeof (struct Node));
      t->data = A[i];
      t->next = NULL;
      last->next = t;
      last = t;
    }
}
