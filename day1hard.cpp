#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> arr = {2, 7, 11, 15}; 
    int target;
    cin >> target; 
    
    Solution s; 
    vector<int> result = s.twoSum(arr, target); 

    if (!result.empty()) {
        cout << "sum: " << result[0] << "," << result[1] << endl;
    } else {
        cout << "no such number" << endl;
    }

    return 0;
}
