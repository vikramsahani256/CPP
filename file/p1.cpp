
// write a create and write a file

#include<bits/stdc++.h>
using namespace std;
int main(){
  
  ofstream myFile("f1.txt");

  myFile<<"hello vikram!";

  myFile.close();

  
  return 0 ;

}