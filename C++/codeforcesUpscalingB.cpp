#include <iostream>
using namespace std;
int main(){
    
    int t;cin>>t;
    for(int i=1;i<=t;i++){
     int n;
    cin>>n;
    bool rowFlag=true;
    for(int i=1;i<=2*n;i++){
        if(i%2)rowFlag=!rowFlag;
       bool flag=rowFlag? false :true;
        for(int j=1;j<=2*n;j++){
          if(j%2) flag=!flag;
          if(!flag)cout<<"#";
            else cout<<".";    
        }
        cout<<endl;
    }
}}