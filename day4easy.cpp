#include <bits/stdc++.h>
using namespace std;

void test(int arr[], int topicno) {
   
    for (int i = 0; i < 3; i++) {
        if (arr[i] == topicno) {
            cout << "YES" << endl;
            return;
        }
        
    }
        cout << "NO" << endl;
}

int main() {
    int arr[3];  
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];  
    }
    int topicno;
    cin >> topicno;  
    test(arr, topicno);  
    return 0;
}



