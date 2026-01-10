// Input:
// Enter the value of n bw 0 to 95
// 20
// Output:
// 20th Fabonacci no. will be 4181


#include <iostream>
using namespace std;

long nthFibonacci(int n){

  if(n<=0)return -1;

  if(n==1)return 0;

  if(n==2)return 1;

  int i=2;

  long n1=0;

  long n2=1;

  long temp=0;

   

  while(i<n){

    temp=n1; 

    n1=n2; 

    n2=temp+n2; 

    i++;

  }

  return n2;

}



int main(){

cout << "Enter the value of n bw 0 to 95"<< endl;

int n=0;

cin >>n;

cout <<n<<"th Fabonacci no. will be "<< nthFibonacci(n)<< endl;



  return 0;

}

