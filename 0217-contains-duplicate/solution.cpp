#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        seen.reserve(nums.size());
        seen.max_load_factor(0.7f);
        
        for (int i = 0; i < nums.size(); i++) {
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test 1: " << (sol.containsDuplicate(nums1) ? "true" : "false") << endl;
    
    // Test case 2
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test 2: " << (sol.containsDuplicate(nums2) ? "true" : "false") << endl;
    
    // Test case 3
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << "Test 3: " << (sol.containsDuplicate(nums3) ? "true" : "false") << endl;
    
    return 0;
}
