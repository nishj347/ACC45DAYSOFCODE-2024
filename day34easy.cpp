#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n1,n2;
    cin>>n1>>n2;
    int n=n1+n2;
    int x=21-n;
    if(x>10){
          cout<<"-1"<<endl;
        
    }
    else {
        cout<<x<<endl;
    }
  
    
}
return 0;
}
