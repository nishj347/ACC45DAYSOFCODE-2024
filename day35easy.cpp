#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int result=b*1+c*2;
        if(result>=a){
            cout<<"Qualify"<<endl;
        }
        else{
            cout<<"NotQualify"<<endl;
        }
        }
        return 0;

}