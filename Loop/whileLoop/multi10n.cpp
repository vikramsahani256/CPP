#include<bits/stdc++.h>
using namespace std;

int main(){

int i, n = 10 , multi = 1;
int m = n ; 
 while (n!=0)
 {
  multi = multi * n ; 
  n = n-1 ; 
 }
 
cout<<"multiplication of first "<<m<<" number is "<<multi<<endl;
  return 0;
}