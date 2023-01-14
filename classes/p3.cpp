#include<bits/stdc++.h>
using namespace std;

class vahicles {
  public:
    string name ;
  void horn(){
    cout<<"blow horn pls!!!"<<endl;
  }
};

class color {
  public:
  void col(){
    cout<<" car is red" << endl;
  }

};

class car : public vahicles , public color
{
  string model ; 

};

int main(){
 vahicles v1;
 v1.horn();

 car c1;
 c1.horn();

 c1.col();


  return 0 ;
}