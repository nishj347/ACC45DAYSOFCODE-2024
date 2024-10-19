#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool canHaveSameMultiset(vector<int>& animals) {
    unordered_map<int, int> count; // To store the frequency of each type of animal
    
    // Count the frequency of each animal type
    for (int animal : animals) {
        count[animal]++;
    }
    
    // Check if for each animal type, the frequency is even
    for (const auto& pair : count) {
        if (pair.second % 2 != 0) {
            return false; // If any frequency is odd, return false
        }
    }
    
    return true; // All frequencies are even
}

int main() {
    int t;
    cin>>t;
    while(t--){
        

    int N; // Number of animals
    cin >> N;
    
    vector<int> animals(N);
    
    for (int i = 0; i < N; i++) {
        cin >> animals[i]; // Input the types of animals
    }
    
    if (canHaveSameMultiset(animals)) {
        cout << "Yes" << endl; // Alice and Bob can have the same multiset
    } else {
        cout << "No" << endl; // Alice and Bob cannot have the same multiset
    }
    }
    
    return 0;
}