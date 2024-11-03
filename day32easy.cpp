#include <bits/stdc++.h>

using namespace std;

void game() {
    int n;
    cin >> n;

    int max_lead = 0;
    int winner = 0;

    int score1 = 0;
    int score2 = 0;

    for (int i = 0; i < n; ++i) {
        int s, t;
        cin >> s >> t;

        score1 += s;
        score2 += t;

        int lead = abs(score1 - score2);
        if (lead > max_lead) {
            max_lead = lead;
            winner = (score1 > score2) ? 1 : 2;
        }
    }

    cout << winner << " " << max_lead << endl;
}

int main() {
    game();
    return 0;
}

