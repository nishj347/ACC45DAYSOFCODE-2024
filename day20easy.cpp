#include <bits/stdc++.h>
using namespace std;
void testcase(int x,int y,int z,int q){
    if(x==0&& y==0 && z==0 && q==0){
        cout<<"IN"<<endl;
    }
    else if(x==1||y==1|| z==1|| q==1){
        cout<<"OUT"<<endl;
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        int z;
        int q;
        cin>>x>>y>>z>>q;
        testcase(x,y,z,q);
    }
    return 0;

}
