#include <iostream>
using namespace std;
int main(){
    int n,d,rev=0
    cin>>n;
    while(n>0){
        d=n%10;
        n=n/10;
    }
    if(d==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}