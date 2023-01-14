/*
vector increse its size to double based on size

size -  kitna data hai
capacity -  kitna data aa sakata hai.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v;

  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;

  v.push_back(22);
  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;

    v.push_back(22);
  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;

    v.push_back(22);
  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;

    v.push_back(22);
  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;

    v.push_back(22);
  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;

// pop_back(), front(),back() -> methods


// clear method;

  v.clear(); // capacity remain same but size become 0 ; 
  cout<<"capacity = "<<v.capacity() <<" , size = "<<v.size()<<endl;
  return 0 ;
}