#include<bits/stdc++.h>
using namespace std;

void Dofun(int num){
    cout<<num<<endl;
    cout<< num + 5<<endl;
    cout<<num + 10<<endl;

}

int main(){

    int num;
    cin>>num;
    Dofun(num);
    cout<<num<<endl;

    /*Output
    10
    15
    20
    10

    The last value remain unchanged cause when we pass
    the value to the functin by "pass by value" it sends
    the copy to the function not the OG value The OG
    value will be stored somewhere else 
    */
 
}