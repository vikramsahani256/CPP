#include<bits/stdc++.h>
using namespace std; 
int main(){
  int n, f_febo = 0 , s_febo = 1 , next_febo = 0 ;
  cout<<"Enter no of n: ";
  cin>>n;

 cout<<f_febo<<" ";
 cout<<s_febo<<" ";

for(int i = 1 ; i < n-1 ;i++){
    next_febo = f_febo + s_febo ;
    cout<<next_febo<<" ";
    f_febo = s_febo;
    s_febo = next_febo;
  }

cout<<endl;

  return 0;
}