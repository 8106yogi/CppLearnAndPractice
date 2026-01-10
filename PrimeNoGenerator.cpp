// Input:
// Enter to check N Prime no.
// 20
// Output:
// 1 isPrime 
// 2 isPrime 
// 3 isPrime 
// 5 isPrime 
// 7 isPrime 
// 11 isPrime 
// 13 isPrime 
// 17 isPrime 
// 19 isPrime 

#include<iostream>

using namespace std;

bool isPrime(int n){

for(int i=2; i*i<=n; i++){

if(n%i==0)return false;

}

return true;

}

int main(){

cout<<"Enter to check N Prime no."<< endl;

int n=0;

cin>> n;

for(int i=1; i<=n; i++){

if(isPrime(i))

cout <<i <<" isPrime "<<endl;

}

return 0;

}
