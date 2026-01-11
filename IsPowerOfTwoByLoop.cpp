//C++ Implementation for Power of Two Verification using Loops
//Enter the number
//Input: 1
//Output:
//the number is power of 2 : 0

//Input:
//Enter the number
//20
//Output:
//the number is power of 2 : 0

//Find if the number is power of 2;
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
if(n<2)return false;
int temp=n;

while(temp!=2){
    if(temp%2!=0){
        return false;
    }
    temp= temp/2;
}
return true;
}



int main(){
    cout<< "Enter the number"<<endl;
    int n=0;
    cin >> n;
    bool b=(isPowerOfTwo(n));
    cout <<"the number is power of 2 : "<< b<<endl;
    
    
}
