#include<bits/stdc++.h>
using namespace std;

int main(){

  struct {
    string name ; 
    int age ; 
  } student1 ; 

  student1.name = "Ram" ; 
  student1.age = 11 ; 

  cout<<"student1 name is "<< student1.name <<" and age is "<< student1.age<<endl;

   struct student {  // it will behave like student s1, s2 
    string name ; 
    int age ; 
  }  ; 

student s1 ; 

s1.name = "karan" ;
s1.age = 10 ; 

  cout<<"s1 student name is "<< s1.name <<" and age is "<< s1.age<<endl;

 

  return 0 ;
} 