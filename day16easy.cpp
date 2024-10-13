#include <bits/stdc++.h>
using namespace std;
void pages(int n){
    if(n>=1){
        int count=n*1000;
        int final=count/100;
        cout<<final<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pages(n);
    }
    return 0;


}
