#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,lastdigit;
    cout<<"enter an number : ";
    cin>>n;

    while (n > 0){
        lastdigit = n % 10;
        cout<<lastdigit<<endl;
        n = n / 10;
    }
    return 0;
}