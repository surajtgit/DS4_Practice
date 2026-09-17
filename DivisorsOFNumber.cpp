#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// Normal method wiht O(n) time complexicity
void printDivisors1(int n){
    for(int i = 1 ;i<= n; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
}


// advance method with O(sqrt(n)) time complexicity
void printDivisors2(int n){
    vector <int> ls;
    for(int i = 1; i <= sqrt(n);i++){
        if( n % i == 0){
            ls.push_back(i);
        }
        if( (n / i) != i){
                ls.push_back(n/i);
            }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout<<it<<" ";
}
int main(){
    int n ;
    cout<<"Enter an number : ";
    cin>>n;

    printDivisors2(n);
    return 0;
}