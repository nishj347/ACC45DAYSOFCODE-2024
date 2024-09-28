#include <iostream>
#include <string>

using namespace std;

bool vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool number(string& word) {
    for (char ch : word) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

bool hardtopronounce(string word) {
    int count = 0;

    for (int i = 0; i < word.size(); i++) {
        if (!vowel(word[i]) && isalpha(word[i])) { // Consonant check
            count++;
            if (count >= 4) {
                return true;  // Hard to pronounce if 4 or more consecutive consonants
            }
        } else {
            count = 0;  // Reset count if a vowel is found
        }
    }
    return false; 
}

int main() {
    int t;
    cin >> t;  // Read number of words

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;  // Read each word
        
        if (number(word)) {
            cout << "YES" << endl;  // Numbers are always easy to pronounce
        } else if (hardtopronounce(word)) {
            cout << "YES" << endl;  // Hard to pronounce if 4 or more consecutive consonants
        } else {
            cout << "NO" << endl;   // Otherwise, easy to pronounce
        }
    }

    return 0;
}
