#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2){
    int gcd_num = 1;
    for(int i = min(n1,n2); i >= 1;i--){
        if(n1 % i == 0 && n2 % i == 0){
            gcd_num = i;
            break;
        }
    }
    // return gcd_num;
}

int main(){

    int n1,n2;
    cout<<"Enter 2 numbers :";
    cin>>n1>>n2;

    int res = gcd(n1,n2);
    cout<<"Gcd : "<<res<<endl;
    return 0;
}