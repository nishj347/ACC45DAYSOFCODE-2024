#include<bits/stdc++.h>
using namespace std;


bool vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


bool hardtopronounce(string word) {
    int count = 0;

 
    for (int i = 0; i < word.size(); i++) {
        if (!vowel(word[i]) && isalpha(word[i])) { 
            count++;
            if (count >= 4) {  
                return true;  
            }
        } else {
            count = 0;  
        }
    }
    return false;  
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        string word;
        
        cin >> n;  
        cin >> word;  

        if (hardtopronounce(word)) {
            cout << "NO" << endl;  
        } else {
            cout << "YES" << endl;  
        }
    }

    return 0;
}

