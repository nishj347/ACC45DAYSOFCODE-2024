#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int coins = (n / 5) * 4 + (n % 5);
        cout << coins << endl;
    }
    return 0;
}
