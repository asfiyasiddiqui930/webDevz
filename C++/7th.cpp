#include <iostream>
using namespace std;
int main(){
    int a,b,d1,d2,dd1,dd2;
    cout<<"Enter any two numbers:"<<endl;
    cin>>a>>b;
    d1=a%10;
    d2=a/10;
    dd1=b%10;
    dd2=b/10;
    if(dd1==d1||dd1==d2){
        cout<<"Found"<<endl;
    }
    else if(d1==dd1||d1==dd2){
        cout<<"Found"<<endl;
}
    else{
    cout<<"Not Found"<<endl;
}
}