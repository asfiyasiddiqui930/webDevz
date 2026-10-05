 #include <iostream>
 using namespace std;
 
 int main() {
	
    int n;
    cout<<"Enter a 5 digit number:"<<endl;
    cin>>n;
    int a,d;
    d=n%10;
    a=a+d;
    n=n/10;
    cout<<"Sum of"<<n<<"is"<<a<<endl;
     
    return 0;
}