
#include <iostream>
#include<queue> 
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;

int main()
{
    // priority_queue<int> max;
   
                       //// no modification in set and no duplicate and always store the value in ascending order
    
    //  set<int> s;  
    
    // s.insert(12);
    // s.insert(9);
    // s.insert(4);
    // s.insert(5);
    // // s.insert(5);
    // // s.insert(4);
    
    // for(int i :s)
    // {
    //     cout<<i<<endl;
    // }
    
    // set<int>::iterator itr=s.find(12);
    
    // cout<<*itr<<endl;
    
    
    // set<int>::iterator it=s.begin();        //use itertor for this
    // it++;
    // s.erase(it);
    
    
    // for(int i :s)
    // {
    //     cout<<i<<endl;
    // }
    
    // cout<<"this is the value"<<" "<<s.count(12)<<endl;     ////it will give binary if true 1 if not 0
    
    
    
    
    // priority_queue<int,vector<int>,greater<int>> mini;
    
    
    
    
    
    // max.push(1);
    // max.push(70);
    // max.push(4);
    // max.push(2);
    // int n=max.size();
    // for(int i=0;i<n;i++)
    // {
    //     cout<<max.top()<<endl;
    //     max.pop();
    // }
    
    
    // mini.push(22);
    //  mini.push(12);
    //   mini.push(8);
    //   mini.push(1);
       
       
    //   int m=mini.size();
    //   for(int j=0;j<m;j++)
    //   {
    //       cout<<mini.top()<<endl;
    //       mini.pop();
    //   }
    
    
    
    
    // map<string,int> m;
    // map<int ,string> m;
    
    
    // m[2]="gagan";
    // m[34]="qwerty";
    // m[3]="king";
    
    
    
    
    
    // cout<<m.count(-34)<<endl;
    
    
    // m.erase(34);
    //  for(auto i :m)               ///for int in belongs to m  this is read as;;;
    // {
    //   cout<<i.first<<endl;
    //   cout<<i.second<<endl;
    // }
    
    // m.insert({5,"bheem"});
    // // for(auto i :m)               ///for int in belongs to m  this is read as;;;
    // // {
    // //   cout<<i.first<<endl;
    // //   cout<<i.second<<endl;
    // // }
    
    
    // auto itr=m.find(5);
    
    // for(auto it=itr;it!=m.end();it++)
    // {
    //     cout<<(*it).first<<endl;
    // }
    
    
//     vector<int> v;
    
    
// //   v.push_back(13);
//      v.push_back(5);
//      v.push_back(70);
//   v.push_back(2);
//      v.push_back(12);
    
//     for(auto i:v)
//     {
//         cout<<i<<endl;
//     }
    
//     cout<<binary_search(v.begin(),v.end(),70)<<endl;
//         cout<<*lower_bound(v.begin(),v.end(),5)<<endl;


// int a=10,b=34;
// vector <int> v={1,3,4,5,6};
// cout<<max(a,b);
// cout<<min(a,b);
// swap(a,b);

// cout<<a;
// cout<<b;

// string name="gagan";

// reverse(name.begin(),name.end());           reverse will have two parametrs from starting to end
// cout<<name;

// rotate(v.begin(),v.begin()+3,v.end());         ////rotate algo  it has three parametrs  at first start pos,second the new first element  and third is the ending pos        
// sort(v.begin(),v.end());
// for(auto i:v)
// {
//     cout<<i<<endl;
// }


bitset <5> bt;
cin>>bt;


cout<<bt.all()<<endl;
cout<<bt.count()<<endl;

    return 0;
}


   ///////////sort in stl will have introsort combination of quick sort,heap sort,insertion sort//////



