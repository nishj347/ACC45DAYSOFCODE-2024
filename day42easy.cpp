#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin >>a>>b>>c;
        vector<int>arr={a, b, c};
        
        int min = *min_element(arr.begin(),arr.end());
        cout <<(a+b+c)-min << endl;
    }
    return 0;
}

