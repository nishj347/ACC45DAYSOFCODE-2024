#include <iostream>
using namespace std;

void price(int n, int x) {
    int subscriptions = 0;
    while (n > 0) {
        subscriptions++;
        n -= 6;
    }
    
    cout << subscriptions * x << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        price(n, x);
    }
    return 0;
}
