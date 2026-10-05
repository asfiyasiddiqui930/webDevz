#include <iostream>
using namespace std;


int prime(int n){
    for(int i=1;i<=n;i++){
        if(n%1==0 && n%n==0){
            cout<<"Prime";
            return true;
    }}
    int main(){
        int n;
        cin>>n;
        prime(n);
        return 0;
    }
}