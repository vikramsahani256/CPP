
#include<iostream>
#include<list>
using namespace std;


// in stl list 2 ptr is present

int main(){

 
  list<int> d;
d.push_front(2);
d.push_back(1);
d.push_back(3);

   cout<<"print d"<<endl;
   for(int i : d){
    cout<<i<<endl;
  }

  d.pop_back();

 cout<<"print d"<<endl;
   for(int i : d){
    cout<<i<<endl;
  }

  d.pop_front();

   cout<<"print d"<<endl;
   for(int i : d){
    cout<<i<<endl;
  }

  return 0 ;
}