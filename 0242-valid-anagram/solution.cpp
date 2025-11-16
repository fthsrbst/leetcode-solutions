#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        int charCounts[26] = {0};
        
        for (int i = 0; i < s.size(); i++) {
            charCounts[s[i] - 'a']++;
            charCounts[t[i] - 'a']--;
        }
        
        for (int i = 0; i < 26; i++) {
            if (charCounts[i] != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    string s1 = "anagram", t1 = "nagaram";
    cout << "Test 1: " << (sol.isAnagram(s1, t1) ? "true" : "false") << endl;
    
    // Test case 2
    string s2 = "rat", t2 = "car";
    cout << "Test 2: " << (sol.isAnagram(s2, t2) ? "true" : "false") << endl;
    
    // Test case 3
    string s3 = "listen", t3 = "silent";
    cout << "Test 3: " << (sol.isAnagram(s3, t3) ? "true" : "false") << endl;
    
    return 0;
}
