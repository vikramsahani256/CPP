#include<bits/stdc++.h>
using namespace std;

int main(){

int num1 = 2;

cout<<"num1 value = "<<num1 << "\nnum2 address = "<< &num1 <<endl;

int* ptr = &num1 ; 

cout<<" Address of num is  = "<< ptr << endl ;


// to access value of any address 
// dereferencing
cout<<" value of num using ptr  = "<< *ptr << endl ;


  return 0 ;
} 