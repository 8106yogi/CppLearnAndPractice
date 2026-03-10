//Intput: 11 22 33 44 55
//Output: 11 22 33 44 55

#include <iostream>
using namespace std;

int main(){
    int size=5;
    int nums[size];
    for(int i=0; i<size;i++ ){
        cin >> nums[i];
    }
    for(int i=0; i< size;i++){
        cout<< nums[i]<<" ";
    }
    return 0;
}
