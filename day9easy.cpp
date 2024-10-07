#include <bits/stdc++.h>
using namespace std;
void demo(int permonth,int cost){

    if(permonth>=cost){
        cout<<"0"<<endl;
    }
    else {
        int x=cost/permonth;
        if(x*permonth==cost){
            x--;
            
        }
        cout<<x<<endl;
        
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int permonth;
        int cost;
        cin>>permonth>>cost;
        demo(permonth,cost);
    }
    return 0;


}