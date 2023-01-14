
#include<iostream>
#include<vector>
using namespace std;

int main(){

 
  vector<int> a(4,1);

   cout<<"print a"<<endl;
   for(int i : a){
    cout<<i<<endl;
  }

// erase(),begin(),end();

a.erase(a.begin(),a.begin()+1);
  cout<<"print a after erase"<<endl;
  for(int i : a){
    cout<<i<<endl;
  }

  return 0 ;
}