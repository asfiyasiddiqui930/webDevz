 #include <iostream>
using namespace std; 
 int main(){
int n,a,b;
cin>>n;
cin>>a;
cin>>b;

if(n==10){
    cout<<a+b;
}
else if(n==20)
{
    cout<<a-b;
    
}
else if(n==30){
    cout<<a*b;
}
 else if(n==40){
    if(b==0){
cout<<"Error:Integer modulo by zero";
 }
 else {
    cout<<a%b;
 }}
else if(n==50){
    if(b==0){
    cout<<"Error: Integer modulo by zero";
 }

 else {
    cout<<a/b;
 }
 }
 }
 