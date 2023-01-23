#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v1(5,88);
for(int i :v1 ){
  cout<<i<<" ";
}cout<<endl;


// for 2d array

vector< vector <int> > v2 {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i =0 ;i<v2.size();i++){
      for(int j = 0 ; j < v2[i].size();j++){
        cout<<v2[i][j]<<" ";
      }
      cout<<endl;
    }
      cout<<endl;




  return 0 ; 
}