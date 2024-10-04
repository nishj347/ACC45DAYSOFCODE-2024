#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int currentpeople = x;
        int maxpeople = x;
        
        for (int i = 0; i <n; ++i) {
            currentpeople += a[i];         
            maxpeople = max(maxpeople, currentpeople);
        }
        
        cout << maxpeople << endl;
    }

    return 0;
}