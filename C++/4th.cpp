#include <iostream>
using namespace std;

int main(){
    int n,sum=0,d;
    cin>>n;
    while(n>0)
    {
    d=n%10;
    sum=sum+n;
    n=n/10;
   
}
 cout<<sum;
 return 0;
}
