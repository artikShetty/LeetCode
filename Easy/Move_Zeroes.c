/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

1. You must do this in-place without making a copy of the array.
2. Minimize the total number of operations. */

void moveZeroes(int* nums, int numsSize){

    int non_zero_count = 0;
    for(int i = 0; i<numsSize; i++)
    {
        if(nums[i]!=0){nums[non_zero_count++] = nums[i];}
    }
    
    while (non_zero_count < numsSize)
    {
        nums[non_zero_count++] = 0;
    }
       
}

