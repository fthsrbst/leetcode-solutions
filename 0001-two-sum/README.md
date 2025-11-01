# 1. Two Sum1. Two Sum



**Difficulty:** EasyHint

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

## Problem

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You can return the answer in any order.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

 

## Examples

Example 1:

```

Input: nums = [2,7,11,15], target = 9Input: nums = [2,7,11,15], target = 9

Output: [0,1]Output: [0,1]

Explanation: nums[0] + nums[1] == 9Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

```Example 2:



```Input: nums = [3,2,4], target = 6

Input: nums = [3,2,4], target = 6Output: [1,2]

Output: [1,2]Example 3:

```

Input: nums = [3,3], target = 6

## Solution ApproachOutput: [0,1]

 

**Hash Map (Optimal)**

Constraints:

- Store each number and its index in a hash map as we iterate

- For each number, check if its complement (target - num) exists in the map2 <= nums.length <= 104

- If found, return both indices-109 <= nums[i] <= 109

-109 <= target <= 109

**Complexity:**Only one valid answer exists.

- Time: O(n) 

- Space: O(n)

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

## Implementation 


See [solution.cpp](./solution.cpp)
