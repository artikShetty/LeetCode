/*
Maximum Subarray
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Example:
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

int max(int a, int b){return(a>b)?a:b;}

int maxSubArray(int* nums, int numsSize){

    int max_sub_array = nums[0];
    int current_max = nums[0];
    
    for(int i =1;i<numsSize;i++)
    {
        current_max = max(nums[i], current_max+nums[i]);
        max_sub_array = max(max_sub_array, current_max);
    }
    return max_sub_array;    
}

