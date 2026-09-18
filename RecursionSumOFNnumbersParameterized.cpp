#include<bits/stdc++.h>
using namespace std;

void func(int i,int sum){
    if( i < 1){
        cout<<sum;
        return;
    }
    func(i-1,sum+i);
}

int main(){
    int n,sum = 0;
    cout<<"Enter an number :";
    cin>>n;

    func(n,sum);
    return 0;
}