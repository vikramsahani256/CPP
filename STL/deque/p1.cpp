
#include<iostream>
#include<deque>
using namespace std;


// deque means fornt and back operation possible

int main(){

 
  deque<int> d;
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