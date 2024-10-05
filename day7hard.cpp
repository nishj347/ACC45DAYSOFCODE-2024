#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   bool canJump(vector<int>& nums) {
    int n =nums.size();
    int last= 0; 
    for (int i = 0; i < n; i++) {
        if (i >last) {
            return false;
        }
        last = max(last, i +nums[i]);
        if (last>= n - 1) {
            return true;
        }
    }
    return false;
}
};