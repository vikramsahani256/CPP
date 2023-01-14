
#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

cout<<"print v"<<endl;
  for(int i : v){
    cout<<i<<endl;
  }

  // copy a vector
cout<<"print copy v"<<endl;
  vector<int> copyV(v);
   for(int i : v){
    cout<<i<<endl;
  }

  vector<int> a(4,1); // size of 4 and assign with 1 ; 

   cout<<"print a"<<endl;
   for(int i : a){
    cout<<i<<endl;
  }

    vector<int> b(4); // size of 4 and assign with 0 ; 

   cout<<"print b"<<endl;
   for(int i : b){
    cout<<i<<endl;
  }

  return 0 ;
}