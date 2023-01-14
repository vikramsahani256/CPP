#include<iostream>
#include<array>
using namespace std;

int main(){

  int arr[3] = {11,22,33};
  cout<<"size of arr is  "<< sizeof(arr)/sizeof(arr[0])<<endl;
  array<int, 3> a = {11,2,33};
  cout<<"size of a is  "<< a.size()<<endl;
  

  return 0 ;
}