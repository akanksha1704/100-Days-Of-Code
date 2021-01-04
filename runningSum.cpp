//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

//Return the running sum of nums.

 

//Example 1:

//Input: nums = [1,2,3,4]
//Output: [1,3,6,10]
//Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
//Example 2:

//Input: nums = [1,1,1,1,1]
//Output: [1,2,3,4,5]
//Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
            nums[i]=s;
        }
        return nums;
        
    }
};
