//Finding the Minimum Value in a C++ Integer Array


// Output:
// Array is: 33 44 23 54 23 -60 56 765 23 2 43 -4 -33 -32 43 54 32 54 5 9 0 54 
// The minimum number of above array is: -60


#include<iostream>
#include <climits>
using namespace std;

int main(){
    
    int nums[]={33,44,23,54,23,-60,56,765,23,2,43,-4,-33,-32,43,54,32,54,5,9,0,54};
    
    int small = INT_MAX;
    cout<<"Array is: ";
    for( int i=0; i< sizeof(nums)/sizeof(int);i++){
        small = min(nums[i] , small);
        cout<<nums[i]<<" ";
        
    }
    cout<<endl;
    cout<<"The minimum number of above array is: "<<small<<endl;
    
    return 0;
    
    
}
