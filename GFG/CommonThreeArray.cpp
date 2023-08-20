

int main()
{
   int  A[] = {1, 5, 10, 20, 40, 80};
int  B[] = {6, 7, 20, 80, 100};
int  C[] = {3, 4, 15, 20, 30, 70, 80, 120};


int arr[200];
int i,j,k,l;
int n1=6;
int n2=5;
int n3=8;


for(i=0;i<n1;i++)
        {
            // arr[arr1[i]]=arr[arr1[i]]+1;
            arr[A[i]]++;
        }
        
        for(j=0;j<n2;j++)
        {
            // arr[arr2[j]]=arr[arr2[j]]+1;
            arr[B[j]]++;
        }
        
         for(k=0;k<n3;k++)
        {
            // arr[arr3[k]]=arr[arr3[k]]+1;
            arr[C[k]]++;
        }


for(l=0;l<200;l++)
{
    if(arr[l]==3)
        {
               cout<<l<<endl;
        }
        
        // }
}

    return 0;
}
