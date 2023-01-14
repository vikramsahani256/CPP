#include<bits/stdc++.h>
using namespace std;

int main(){

int num1 = 2;
int &num2 = num1 ; 

cout<<"num1 = "<<num1 << " and num2 = "<<num2<<endl;

cout<<"num1 address = "<<&num1 << " and num2 address = "<<&num2<<endl;   // give same memory address


  return 0 ;
} 