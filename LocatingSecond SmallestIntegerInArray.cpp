//Find index of second smalles number.
//input
//21 4 2 2 3 4 5 5 4 3 23 4 3 4 3 24 4 2 3 42 4 5 4 5 5 45 54 5 5 45 45 54 54 
//output
//Smallest number from array is: 2
//Second Smallest number from array is: 3

#include<iostream>
#include<climits>
using namespace std;



int main(){

int arr[]={21,4,2,2,3,4,5,5,4,3,23,4,3,4,3,24,4,2,3,42,4,5,4,5,5,45,54,5,5,45,45,54,54};    
int second_small= INT_MAX;
int small=INT_MAX;

    for(int i=0;i<size(arr);i++){
        cout<<arr[i]<< " ";
       if(arr[i]<small){
            small=arr[i];
        }else if(arr[i]> small && arr[i]< second_small){
            second_small=arr[i];
        }
    }
    cout<< endl;
    cout<<"Smallest number from array is: "<<small<< endl;
    cout<<"Second Smallest number from array is: "<<second_small<< endl;
    
return 0;
}
