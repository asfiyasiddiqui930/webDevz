#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    c=n-1;
    for(int i=1;i<n;i++,c--){
        for(int k=1;k<c;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;

    }
}