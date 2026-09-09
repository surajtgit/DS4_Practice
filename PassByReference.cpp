#include<bits/stdc++.h>
using namespace std;

void dofuc(int &x){
    cout<< x + 10<<endl;
    cout<< x + 15<<endl;
    cout<< x+ 20 <<endl;
}

int main(){

    int x;
    cin>>x;
    dofuc(x);
    cout<<x;
    return 0;
}