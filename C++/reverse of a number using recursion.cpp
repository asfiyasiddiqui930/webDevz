#include <iostream>
using namespace std;
int rev(int n int &pow){
if(n<10){
    pow++;
    return n;}
    int rdr =f(n/10,pow);
    const int powr=pow++;
    int temp=1;
    for(int i=1;i<=powr;i++){
        temp*=10;
        return (n%10)*(temp)+rdr;
    }
    return (n%10)*
}
}
int main(){
    int n,d; cin>>n;
    rev(n);
    return rev(n);
}