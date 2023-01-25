#include<bits/stdc++.h>
using namespace std ; 

int findDigit(int number ){
    int  count = 0 ;
    while( number > 0 ) {
        number = number/10 ; 
        count++ ; 
    }
    return count ; 
}

bool isArmstrongNumber(int number ,  int digit ){
    int  sum = 0 , num_copy = number ; 
    while( number > 0 ) {
        sum += pow( number%10  ,digit) ; 
        number = number/10 ; 
    }
    return (num_copy == sum) ;
}

int main(){
   int num ; 
   cout<<"Enter the Number: ";
   cin>>num ; 
   cout<<"isArmstrongNumber : "<< (isArmstrongNumber(num , findDigit(num) ) ? "YES" : "NO") <<endl;
   
    return 0 ; 
}