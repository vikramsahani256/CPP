#include<iostream>
#include<array>
using namespace std;

int main(){

  int arr[3] = {11,22,33};
  cout<<"size of arr is  "<< sizeof(arr)/sizeof(arr[0])<<endl;
  array<int, 3> a = {11,2,33};
  cout<<"size of a is  "<< a.size()<<endl;

// [],at(),front();
  cout<<"array 1st element = "<<a[0]<<endl;
  cout<<"array 1st element = "<<a.at(0)<<endl;
  cout<<"array 1st element = "<<a.front()<<endl;

  // last element

  cout<<"array last element = "<<a.back()<<endl;
  cout<<"array last element = "<<a[a.size()-1]<<endl;

  // is empty?
  cout<<"array is empty?? = "<<a.empty()<<endl;


  

  return 0 ;
}