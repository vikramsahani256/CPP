// wether n is fibonacci or not?

#include<bits/stdc++.h>
using namespace std; 

int isFeboNumber(int n){
  
  int first_num = 0 , sec_num = 1 , febo = 0 ;   
  while(febo < n){
      febo      = first_num + sec_num ; 
      first_num = sec_num ; 
      sec_num   = febo ; 
  }
  return (n==febo);
  
}

int main(){
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  if(isFeboNumber(n)){
      cout<<"Yes, "<<n<<" is a febonacci number"<<endl;
  }else{
      cout<<"No, "<<n<<" is not a febonacci number"<<endl;
  }
  return 0;
}

/*

timecomplecity - O(n)
space - n

*/