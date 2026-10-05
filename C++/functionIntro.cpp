#include <iostream>
using namespace std;

void phw(int n){
    for(int i =1;i<=n;i++)
    cout<<"Hello world\n";
    return;
}

int main(){
    //function_name(i/p)
    //to print hello world n times
    int n;
    cin>>n;
   phw(n);
    return 0;
    
}