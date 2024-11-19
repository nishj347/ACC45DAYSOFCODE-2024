#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,z,a;
    cin>>x>>y>>z>>a;
    int usedmemory=z+y;
    int freememory=x-usedmemory;
    if(freememory>=a){
        cout<<"0"<<endl;
    }
    else if(x-y>=a||x-z>=a){
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
    
}
return 0;

}
