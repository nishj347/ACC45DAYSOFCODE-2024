#include <iostream>
using namespace std;

string server(int p, int q) {
    int pointsscored = p + q;
    int servechange = pointsscored / 2;
    if (servechange % 2 == 0) {
        return "Alice";
    } else {
        return "Bob";
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int p, q;
   
    cin >> p;
    cin >> q;

    cout <<server(p, q)<< endl;
}
    return 0;
}
