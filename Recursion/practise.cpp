
#include <iostream>

using namespace std;



// void fun1(int n){
//     if(n>0){
//         fun1(n-1);
//         cout<<n<<endl;
//     }
// }

// void lin(int n)
// {
//     int i=0;
//   if(i>n)
//   return;
   
//       i++;
//       cout<<i<<endl;
//       lin(n);
       
   
// }
// int name(int i,int n)
// {
//     if(i>=n)
//     {
//         return 0;
//     }
    
//     i++;
//     cout<<"raj"<<endl;
//     name(i,n);
// }
// int lin(int i,int n)
// {
//     // int i=0;
//     if(i<1)
//     {
//         return 0;
//     }
    
//     lin(i-1,n);
//     cout<<i<<endl;
// }

// int sum(int i,int n,int total)
// {
//     if(i>n)
//     {
//         return 0;
//     }
    
//     total=total+i;
//   return sum(i+1,n,total);
    
// }

void swap(int *a,int *b)
{
    int temp=0;
    
    temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int arr[],int start,int end)
{
    
    if(start>end)
    {
        return;
    }
    swap(&arr[start],&arr[end]);
    return reverse(arr,start+1,end-1);
    
}

bool palindrome(string arr[],int start,int end)
{
    if(start>=end)
    {
        return true;
    }
    if(arr[start]==arr[end])
    {
        cout<<"true";
        return palindrome(arr,start+1,end-1);
    }
    return false;
}

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1 || n==2)
    {
        return 1;
    }
    
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    
// int x=3;
// fun1(3);
// cout<<x<<endl;

// cout<<"enter the number";
// int num;
// cin>>num;
// name(1,i);

// lin(4,i);


// sum(1,num,0);


// string arr[]={"malayalam"};
// int i=0;

// int j=sizeof(arr)/sizeof(arr[0]);
// // reverse(arr,i,j-1);
// if(palindrome(arr,i,j-1))

// {
//     cout<<true;
// }

// else
// cout<<false;
// for(int n=0;n<j;n++)
// {
//     cout<<arr[n]<<endl;
// }

// int n=0;

// cin>>n;
// int first=0;
// int second=1;
// cout<<first<<" "<<second<<" ";
// for(int i=2;i<n;i++)
// {
//     int next=first+second;
//     cout<<next<<" ";
//     first=second;
//     second=next;
// }

int n=0;
cin>>n;
int res=fibo(n);
cout<<res<<endl;
}



