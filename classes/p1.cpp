#include<bits/stdc++.h>
using namespace std;

class student {
  public:
  string name ; 
  int age ; 
  // class methods
  void hello(){
    cout<<"Hello"<<endl;
  }
};

int main(){
 student s1 ; 
 s1.name  = "Ram";
 s1.age   = 21 ; 

 cout<<s1.name<<endl;
 cout<<s1.age<<endl;

 s1.hello();


  return 0 ;
}