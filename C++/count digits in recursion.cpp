#include <iostream>
using namespace std;
void count(int n){
    if(n==0){
        return c;
    }
    int d=n%10;
    n=n/10;
    c++;˛
}
cout<<c;
int main(){
    int n;
    int c;
    cin>>n;
    count(n);
    return 0;
}