int removeDuplicates(int* nums, int numsSize) {
    int cnt=0, i=1;
    for(i; i<numsSize;i++){
        if(nums[i-1] < nums[i]){
            nums[++cnt] = nums[i];
        }

    }
    return cnt+1;
}