#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(n < i) return;
    cout<<n<<endl;
    func(i,n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    func(1,n);
    return 0;
}