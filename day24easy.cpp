#include<iostream>
using namespace std;
int main(){
    int t,n;
cin>>t;
while(t--){
    cin>>n;
    cout<<n/7+(n%7>=2)<<endl;
    
}
    return 0;
}
