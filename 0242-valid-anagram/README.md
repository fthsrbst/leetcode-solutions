# 242. Valid Anagram

**Difficulty:** Easy

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Examples

```
Input: s = "anagram", t = "nagaram"
Output: true
```

```
Input: s = "rat", t = "car"
Output: false
```

## Solution Approach

**Character Frequency Array**

- First check if lengths are different - if so, cannot be anagram
- Use a fixed array of size 26 for lowercase English letters
- Increment count for each character in string s
- Decrement count for each character in string t
- If all counts are zero, strings are anagrams

**Complexity:**
- Time: O(n) where n is the length of the strings
- Space: O(1) - fixed array of size 26

**Key Insight:**
- Using a frequency array is more efficient than sorting (O(n) vs O(n log n))
- Incrementing and decrementing in the same loop is elegant
- Fixed space O(26) = O(1) regardless of input size

## Implementation

See [solution.cpp](./solution.cpp)
