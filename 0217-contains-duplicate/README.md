# 217. Contains Duplicate

**Difficulty:** Easy

## Problem

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

## Examples

```
Input: nums = [1,2,3,1]
Output: true
```

```
Input: nums = [1,2,3,4]
Output: false
```

```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
```

## Solution Approach

**Hash Map**

- Iterate through the array and store each number in a hash map
- Before adding a number, check if it already exists in the map
- If found, return true (duplicate exists)
- If loop completes without finding duplicates, return false

**Complexity:**
- Time: O(n)
- Space: O(n)

## Implementation

See [solution.cpp](./solution.cpp)
