int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int maximumProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    // Calculate the maximum product by considering:
    // 1. The product of the three largest numbers.
    // 2. The product of the two smallest numbers (most negative) and the largest number.
    int option1 = nums[numsSize - 1] * nums[numsSize - 2] * nums[numsSize - 3];
    int option2 = nums[0] * nums[1] * nums[numsSize - 1];

    // Return the larger of the two
    return option1 > option2 ? option1 : option2;
}
    
