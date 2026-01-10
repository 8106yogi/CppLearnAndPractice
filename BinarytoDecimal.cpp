// Enter the binary number to convery into dec
// Input: 1001
// Output: 9


#include <iostream>

using namespace std;



int binaryToDec(long binary){

  int temp=binary;

  int ans=0;

  int power=1;

  int rem=0;



  while(temp>0){

  rem=temp%10;

  ans+= rem*power;

  power = power*2;

  temp=temp/10;

  }

  cout<< ans<<endl;

  return 0;

}



int main(){



cout << "Enter the binary number to convery into dec"<< endl;

   

  long n=0;

  cin>> n;

  binaryToDec(n);

   

  return 0;

}

