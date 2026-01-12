//Binary Verification of Power of Two Calculations
//check if the number is power of 2 by bitwise & method.

// Ex: Enter the number
//Input: 222
//Output: The number 222 is power of 2: false

#include <iostream>

using namespace std;



bool isPowerTwo(int n){

  if(n<2)return false;

  else return ((n & (n-1))==0);

}


int main() {

  int n = 0;

   cout<< "Enter the number"<< endl;

   

   cin>> n;

   cout<<"The number "<< n<< " is power of 2: "<< boolalpha << isPowerTwo(n) <<endl;

   

  return 0;

}

