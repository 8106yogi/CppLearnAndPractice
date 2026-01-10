// Enter the range of numbers to convert into binary form
// Input: 10
// Output:
// Binary of number 0 = 0
// Binary of number 1 = 1
// Binary of number 2 = 10
// Binary of number 3 = 11
// Binary of number 4 = 100
// Binary of number 5 = 101
// Binary of number 6 = 110
// Binary of number 7 = 111
// Binary of number 8 = 1000
// Binary of number 9 = 1001
// Binary of number 10 = 1010

#include<iostream>

using namespace std;

long decimalToBinary(int n){

if(n<0)return -1;

if(n==0)return 0;

int temp=n;

int rem=0;

long ans=0;

int power=1;

while(temp!=0){

rem=temp%2;

temp=temp/2;

ans+=rem*power;

power=power*10;

}

return ans;

}

int main(){

cout<<"Enter the range of numbers to convert into binary form"<< endl;;

int range=0;

cin>>range;

for(int i=0; i<=range;i++){

cout << "Binary of number " << i << " = " << decimalToBinary(i)<< endl;

}

return 0;

}
