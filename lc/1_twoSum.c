#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = malloc(sizeof(int) * 2);
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++)
    {
        for (int a = 0; a < numsSize - 1; a++)
        {
            if (a == i)
                continue;
            else if (nums[i] + nums[a] == target)
            {
                ans[0] = i;
                ans[1] = a; 
                return ans;
            }       
        }
    }
    return (int*) 0;
}