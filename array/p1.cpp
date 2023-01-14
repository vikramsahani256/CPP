
#include<bits/stdc++.h>
using namespace std ; 
int main(){

int arr[3] = {5,6,7} ;

cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;

arr[0] = 'd'; // will assign askii value of 'd' - > 100
arr[1] = 33 ; 
arr[2] = false ; // will assing 0

arr[5] = 23333;         // it should give an error 
cout<<arr[5]<<endl; // 
cout<<"arr--- 3---  "<<arr[3]<<endl; // random number
cout<<"arr---4 --  "<<arr[4]<<endl; // random number 


cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;




return 0 ; 
}

/*
1. array will contains will same type of datatype eg - int - {1,2,3} error -{1,2."ss"} X
2. array bound limmit will not giving worning that means it based on compiler version
3. assigning single char , bool valaue will replace with its aski and flase-0, true -1


*/