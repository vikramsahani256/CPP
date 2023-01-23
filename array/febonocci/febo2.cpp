#include<bits/stdc++.h>
using namespace std; 
int main(){
  int n;
  cout<<"Enter no of n: ";
  cin>>n;
  int febo[n];

 febo[0] = 0 ;
 febo[1] = 1 ; 

for(int i = 2 ; i < n ;i++){
    febo[i] = febo[i-1] + febo[i-2];
  }
  
for(int feno_of_ith : febo){
    cout<<feno_of_ith<<" ";
}

cout<<endl;

  return 0;
}

/*

timecomplecity - O(n)
space - n

*/