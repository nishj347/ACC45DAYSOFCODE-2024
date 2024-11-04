#include <bits/stdc++.h>
using namespace std;

void demo(int n) {
    if (n % 4 == 0) {
        cout << "GOOD" << endl;
    } else {
        cout << "NOT GOOD" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        demo(n);
    }
    return 0;
}
