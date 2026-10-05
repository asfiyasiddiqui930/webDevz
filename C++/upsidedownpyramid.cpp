#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //col,sp
        for(int sp=1;sp<=i-1;sp++){
            cout<<" ";
        }//col,st
            for(int st=1;st<=2*(n-i)+1;st++){
                cout<<"*";
            }

                cout<<endl;
            }
        }
        
    
