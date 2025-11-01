#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        
        for (int i = 0; i < nums.size(); i++) {
            if (window.find(nums[i]) != window.end()) {
                return true;
            }
            window.insert(nums[i]);
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 1};
    int k1 = 3;
    cout << "Test 1: " << (sol.containsNearbyDuplicate(nums1, k1) ? "true" : "false") << endl;
    
    // Test case 2
    vector<int> nums2 = {1, 0, 1, 1};
    int k2 = 1;
    cout << "Test 2: " << (sol.containsNearbyDuplicate(nums2, k2) ? "true" : "false") << endl;
    
    // Test case 3
    vector<int> nums3 = {1, 2, 3, 1, 2, 3};
    int k3 = 2;
    cout << "Test 3: " << (sol.containsNearbyDuplicate(nums3, k3) ? "true" : "false") << endl;
    
    return 0;
}
