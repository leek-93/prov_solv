int removeElement(int* nums, int numsSize, int val) {
    int i=0, k =0, arrSize = numsSize;

    while(i< arrSize){
        if(nums[i] == val){
            k++;
        }
        else{
            nums[i- k] = nums[i];
        }
        i++;
    }
    return numsSize - k;
}