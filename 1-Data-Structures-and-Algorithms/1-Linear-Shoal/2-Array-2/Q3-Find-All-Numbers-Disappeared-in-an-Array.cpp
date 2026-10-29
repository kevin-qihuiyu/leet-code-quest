/**
Q3. Find All Numbers Disappeared in an Array

Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 
Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

Follow up: Could you do it without extra space and in O(n) runtime? 
You may assume the returned list does not count as extra space.

*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n+1);
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            seen[nums[i]] = true; 
        }
        for (int j = 1; j <= n; j++)
        {
            if (!seen[j]) ans.push_back(j);
        }
        return ans;
    }
};