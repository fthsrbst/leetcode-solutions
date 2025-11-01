# 219. Contains Duplicate II

**Difficulty:** Easy

## Problem

Given an integer array `nums` and an integer `k`, return `true` if there are two distinct indices `i` and `j` in the array such that `nums[i] == nums[j]` and `abs(i - j) <= k`.

## Examples

```
Input: nums = [1,2,3,1], k = 3
Output: true
```

```
Input: nums = [1,0,1,1], k = 1
Output: true
```

```
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
```

## Solution Approach

**Sliding Window + Hash Set**

- Maintain a sliding window of size k using a hash set
- For each element, check if it exists in the current window
- If found, return true (duplicate within k distance)
- Add the current element to the window
- If window size exceeds k, remove the oldest element (nums[i-k])

**Complexity:**
- Time: O(n)
- Space: O(min(n, k))

**Key Insight:**
- We only need to track the last k elements
- Using a set as a sliding window efficiently handles both insertion and deletion

## Implementation

See [solution.cpp](./solution.cpp)
