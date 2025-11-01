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

**Hash Set (Optimized)**

- Use an unordered set to track seen numbers
- Optimize performance with `reserve()` and `max_load_factor()`
- For each number, check if it exists in the set
- If found, return true (duplicate exists)
- Otherwise, insert the number and continue
- If loop completes, return false

**Complexity:**
- Time: O(n)
- Space: O(n)

**Optimization:**
- `reserve()` pre-allocates memory to avoid rehashing
- `max_load_factor(0.7f)` reduces hash collisions

## Implementation

See [solution.cpp](./solution.cpp)
