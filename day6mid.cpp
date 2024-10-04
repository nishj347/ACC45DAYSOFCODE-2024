#include<bits/stdc++.h>
using namespace std;


// for my understanding in future
// Minute 1: a[0] = 0, so no change. currentpeople = 8,maxpeople = 8.
// Minute 2: a[1] = 3, 3 people enter the room. currentpeople = 8 + 3 = 11,maxpeople = 11.
// Minute 3: a[2] = 3, 3 more people enter. currentpeople = 11 + 3 = 14,maxpeople = 14.
// Minute 4: a[3] = -13, 13 people leave. currentpeople = 14 - 13 = 1,maxpeople = 14.
// Minute 5: a[4] = 5, 5 people enter. currentpeople = 1 + 5 = 6,maxpeople = 14.
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