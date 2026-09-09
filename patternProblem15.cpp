#include<bits/stdc++.h>
using namespace std;

void print1(int n){

    int space = 0;

    // Upper half
    for(int i = 0; i < n; i++){

        // stars
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }

        // spaces
        for(int j = 0; j < space; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }

        cout << endl;
        space += 2;
    }

    // Lower half
    space -= 2;

    for(int i = 1; i <= n; i++){

        // stars
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        // spaces
        for(int j = 0; j < space; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        cout << endl;
        space -= 2;
    }
}

int main(){

    int n;
    cin >> n;

    print1(n);

    return 0;
}