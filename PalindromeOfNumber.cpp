#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,reverse=0,lastDigit = 0;
    cout<<"Enter an number :";
    cin>>n;
    int og = n;
    while( n > 0){
        lastDigit = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + lastDigit;
    }

    if( reverse == og){
        cout<<"It is Palindrome";
    }
    else{
        cout<<"Not an palindrome";
    }
}