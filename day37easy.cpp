#include <bits/stdc++.h>

using namespace std;

int operation(vector<int>& a) {
    int n = a.size();
    int initial_sum = accumulate(a.begin(), a.end(), 0);

    if (initial_sum == 0) {
        return 0;
    }

    if (abs(initial_sum) % 2 != 0) {
        return -1;
    }

    int count1 = count(a.begin(), a.end(), 1);
    int countneg1 = n - count1;

    int target = abs(initial_sum) / 2;

    // Check if we can reach the target with available 1's and -1's
    if (count1 >= target) {
        return target;
    } else if (countneg1 >= target) {
        return target;
    } else {
        return -1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << operation(a) << endl;
    }
    return 0;
}
