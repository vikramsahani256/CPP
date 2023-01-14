#include<bits/stdc++.h>
using namespace std;

void swap(int &m, int &n){ // definition
 int temp = m ; 
 m = n ; 
 n = temp ;

}

int main(){
 int a=3,b=55 ;
 cout<<"before swap a= "<<a <<" b= "<<b <<endl;
 swap(a,b);
 cout<<"after swap a= "<<a <<" b= "<<b <<endl;

  return 0 ;
} 
