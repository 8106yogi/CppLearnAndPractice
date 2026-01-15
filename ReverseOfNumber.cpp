//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Input: -123
//Output : -321

#include <iostream>
#include <climits>

int reverse(int x) {
        long num=0L;
        while(x!=0){
        num=num*10+x%10;
        x=x/10;
        }
        if(num>INT_MAX||num<INT_MIN)
        return 0;
        return num;
    }
int main(){
    std:: cout<<reverse(-123)<< std::endl;
    return 0;
}
