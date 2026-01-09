#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumOptimal(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // If complement exists, return answer
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        
        // Store current value with its index
        mp[nums[i]] = i;
    }
    
    return {}; // As per problem, solution always exists
}
