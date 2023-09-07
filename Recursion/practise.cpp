
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
int lin(int i,int n)
{
    // int i=0;
    if(i<1)
    {
        return 0;
    }
    
    lin(i-1,n);
    cout<<i<<endl;
}
int main()
{
    
// int x=3;
// fun1(3);
// cout<<x<<endl;
int i;
cin>>i;
// name(1,i);

lin(4,i);
}


