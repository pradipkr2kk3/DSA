/*
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
Return the answer with the smaller index first.
Example 1:
Input: 
nums = [3,4,5,6], target = 7
Output: [0,1]
======================================
*/

/*
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
Return the answer with the smaller index first.
Example 1:
Input: 
nums = [3,4,5,6], target = 7
Output: [0,1]
======================================
*/

class Solution
{
    public:
        vector<int> twoSum(vector <int> & arr, int target)
        {
            for(int i=0;i<arr.size();i++)
            {
               for(int j=i+1;j<arr.size();j++)
		        {
			        if(arr[i]+arr[j] == target)
			        {
				        return{i,j};
			        } 
                }
            }
            return{};
        }

};
/*
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
Return the answer with the smaller index first.
Example 1:
Input: 
nums = [3,4,5,6], target = 7
Output: [0,1]
======================================
*/

class Solution
{
    public:
        vector<int> twoSum(vector <int> & arr, int target)
        {
            for(int i=0;i<arr.size();i++)
            {
               for(int j=i+1;j<arr.size();j++)
		        {
			        if(arr[i]+arr[j] == target)
			        {
				        return{i,j};
			        } 
                }
            }
            return{};
        }

};
/*
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
Return the answer with the smaller index first.
Example 1:
Input: 
nums = [3,4,5,6], target = 7
Output: [0,1]
======================================
*/

class Solution
{
    public:
        vector<int> twoSum(vector <int> & arr, int target)
        {
            for(int i=0;i<arr.size();i++)
            {
               for(int j=i+1;j<arr.size();j++)
		        {
			        if(arr[i]+arr[j] == target)
			        {
				        return{i,j};
			        } 
                }
            }
            return{};
        }

};
