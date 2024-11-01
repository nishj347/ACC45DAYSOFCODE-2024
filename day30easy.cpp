#include <bits/stdc++.h>
using namespace std;

void demo(int t) {
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int x = c - a;
        int y = d - b; 
    
        if (x >= 0 && y >= 0) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    demo(t);
    return 0;
}
