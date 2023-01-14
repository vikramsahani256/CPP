#include<bits/stdc++.h>
using namespace std;

int main(){

int num1 = 2;
int &num2 = num1 ; 

cout<<"num1 = "<<num1 << " and num2 = "<<num2<<endl;

num1 = 3;
cout<<"num1 = "<<num1 << " and num2 = "<<num2<<endl;

num2 = 4;
cout<<"num1 = "<<num1 << " and num2 = "<<num2<<endl;


  return 0 ;
} 