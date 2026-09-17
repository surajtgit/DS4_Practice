#include<bits/stdc++.h>
using namespace std;

int getReverse(int n){
    int rev = 0,lastDigit = 0;

    while ( n > 0){
        lastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastDigit;
    }
     return rev;  
}

int main(){

    int n,reverse;
    cout<<"Enter an number : ";
    cin>>n;
    reverse = getReverse(n);
    cout<<"The reverse number of the given number is : "<<reverse<<endl;
    return 0;
}