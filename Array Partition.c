int comparator(const void *a, const void *b){
    int *x = (int *)a;
    int *y = (int *)b;
    if(*x < *y) return -1;
    return 1;
}
int arrayPairSum(int* nums, int numsSize){
    int sum = 0;
    qsort(nums, numsSize, sizeof(int), comparator);
    for (int i = 0; i < numsSize; i+=2)
    {
        /* code */
        sum += nums[i];
    }
    return sum;
}
