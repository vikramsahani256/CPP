// nth febo num??

#include<bits/stdc++.h>
using namespace std; 

int febo(int n){
  if( n == 0 || n == 1 ){
    return n ;
  }
  return febo(n-1) + febo(n-2);
}

int main(){
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<febo(n-1)<<" ";
  cout<<endl;

  return 0;
}

/*

timecomplecity - O(n)
space - n

*/