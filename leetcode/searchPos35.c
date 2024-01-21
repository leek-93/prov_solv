#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int iter=0, idx=0;
    for(iter; iter<numsSize;iter++){
        if(target == nums[iter]){
            return iter;
        }
        if(nums[iter] != 0 && nums[iter] < target){
            idx = iter+1;
        }
        if(nums[iter] != nums[numsSize-1] && nums[iter] > target){
            idx = iter-1;
        }
    }
    return idx;
}

int main(){
    int arr[5] = {1,3,5,6};
    printf("%d", searchInsert(arr, 5, 5));
    return 0;
}