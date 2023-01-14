#include<bits/stdc++.h>
using namespace std;
int main(){
  
 
  
  ifstream MyReadFile("filename.txt");

  
  while (!MyReadFile.eof()) {
    string line ;
    getline(MyReadFile,line);
    cout << line<<endl;
  }

  // Close the file
  MyReadFile.close();

  
  return 0 ;

}