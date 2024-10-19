#include <bits/stdc++.h>
using namespace std;
void demo(int x,int y){
    if(x>y){
        cout<<"CAR"<<endl;
    }
    else if(x<y){
        cout<<"BIKE"<<endl;
    }
    else{
        cout<<"SAME"<<endl;
    }
}

int main() {
int t;
cin>>t;
while(t--){
    int x;
    int y;
    cin>>x>>y;
    
    demo( x, y);
}
return 0;

}
