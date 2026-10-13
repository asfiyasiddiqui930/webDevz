#include <iostream>
using namespace std;
long long fact(int n){
    long long a=1;
    for(int i=1;i<=n;i++)
      
        a=a*i;
        return a;
    
}
    int main(){
        int x;
        cout<<"Enter number :";
        cin>>x;
        cout<<fact(x);
        return 0;
    }
