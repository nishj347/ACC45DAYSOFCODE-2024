#include <bits/stdc++.h>
using namespace std;

int dish(int a,int b,int c,int d) {
    return max({b+d, a+c, a+d, b+c});
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        cout<< dish(a,b,c,d)<<endl; 
    }
    return 0;
}