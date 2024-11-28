int thirdMax(int* nums, int numsSize){
    long first = ((long)INT_MIN)-1, second = ((long)INT_MIN)-1, third = ((long)INT_MIN)-1;
    int i = 0;
    
    while(i < numsSize){
        if(nums[i] > first){
            third = second;
            second = first;
            first = nums[i];
        }
        else if(nums[i] > second && nums[i] != first){
            third = second;
            second = nums[i];
        }
        else if(nums[i] > third && nums[i] != first && nums[i] != second){
            third = nums[i];
        }
        i++;
    }
    
    if(third == ((long)INT_MIN)-1) return (int)first;
    return (int)third;
}
