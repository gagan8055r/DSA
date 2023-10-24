/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void print(int *p)
{
    // cout<<&p<<endl;
    cout<<p<<endl;
}

void update(int *p)
{
    p=p+1;
    cout<<p<<endl;
}



// important thing is ://///arr[i]=*(i+arr);  and i[arr]=*(i+arr);
int getSum(int *arr,int size)
{
    
    cout<<sizeof(arr)<<endl;
    int s=0;
    
    for(int i=0;i<size;i++)
    {
        // s+=i[arr];
        s+=arr[i];
    }
    
    return s;
}
int main()
{
    // cout<<"Hello World";
    // char temp[6]="abcde";
    // char *c="abcde";
    // c[0]='f';
    // cout<<c<<endl;
    // cout<<c[1]<<endl;
    // char *p=&c;
    // cout<<temp<<endl;
    // int i=9;
    // int *p=&i;
    //  print(p);
    // update(p);
    // print(p);
    int arr[6]={1,2,3,45,5,7};
    // cout<<getSum(arr,6)<<endl;           ///////with this we can take part of an array
    cout<<getSum(arr+3,3)<<endl;
    return 0;
}
