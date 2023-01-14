#include<bits/stdc++.h>
using namespace std;

int sum(int , int );  // declaration

int main(){
 int a=3,b=55 ; 
 cout<<"sum of "<<a<<" and "<<b<<" is " <<sum(a,b) <<endl;
  return 0 ;
} 

int sum(int n1, int n2){ // definition
 return n1+n2; 
}