#include<bits/stdc++.h>
using namespace std;

class student {
  public:
  string name ; 
  int age ; 
  // class constructor
  student(string n , int a){
    name  = n;
    age = a ; 
  }
};

int main(){
 student s1("ram",21);

 cout<<s1.name<<endl;
 cout<<s1.age<<endl;



  return 0 ;
}