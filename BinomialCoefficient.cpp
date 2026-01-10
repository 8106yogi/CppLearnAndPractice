#include

using namespace std;

int factorial(int num){

int fact=1;

int i=num;

while(i>1){

fact*=i;

i--;

}

return fact;

}

int main(){

cout<< "Enter binomial n" << endl;

int n=0;

cin>>n;

cout<< "Enter the binomial r" << endl;

int r=0;

cin>> r;

int nCr=0;

nCr= factorial(n)/(factorial(r)*factorial(n-r));

cout<< "binomial of "<<n<< " & "<< r<<" = "<<nCr<< endl;

return 0;

}
