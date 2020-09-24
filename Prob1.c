
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *sum;
    *returnSize = 2;
    sum = (int*)malloc(*returnSize * sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i!=j){
                if(nums[i]+nums[j] == target){
                    *(sum+0) = j;
                    *(sum+1) = i;
                    break;
                }
            }
        }
    }
    return sum;    
}
