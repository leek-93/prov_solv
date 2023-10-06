#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = malloc(sizeof(int)*2);

    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(target == nums[i] + nums[j]){
                ret[0] = i;
                ret[1] = j;
            }
        }
    }

    return ret;
}

int main(){
    int num[]={0,1,8,10};
    int *twosum = twoSum(num, 4, 9, 0);

    printf("%d %d", twosum[0], twosum[1]);
    free(twosum);
    return 0;
}