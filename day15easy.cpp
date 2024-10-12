#include <bits/stdc++.h>
using namespace std;
void candies(int n,int k,int m){
    int capacity=k*m;
 int bags = (n+capacity- 1) /capacity;
 cout<<bags<<endl;
    }


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        int m;
        cin>>n>>k>>m;
        
        candies(n,k,m);
    }
    return 0;


}