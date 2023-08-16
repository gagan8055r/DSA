/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// class Human
// {
    
//   int health=100;
//   char level;
//     public:
  
  
//   void gethealth()
//   {
//       cout<<health;
//   }
  
//   void sethealth(int h)
//   {
//       health=h;
//       cout<<health<<endl;
//   }
  
// };

class B{
    public:
  int a;
  int b;
  


void operator+(B &obj)

{
    int value1=this->a;
    int value2=obj.a;
    
    cout<<value2-value1<<endl;
    
}


void operator()()
{
    cout<<"bracket type"<<this->a<<endl;
}

};

int main()
{
    
    B obj1,obj2;
    
    
    obj1.a=4;
    obj2.a=10;
    
    // obj1+obj2;
    
    obj1();
    
    
//     Human ravi;
    
//     // ravi.health=89;
//     // ravi.level='A';
    
//     // cout<<ravi.health<<endl;
//     // cout<<ravi.level<<endl;
// //   ravi.gethealth();
//   ravi.sethealth(45);

    return 0;
}


