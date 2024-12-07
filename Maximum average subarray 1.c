double findMaxAverage(int* nums, int numsSize, int k) {
    double sum = 0, max_sum = 0;

    for ( int i = 0; i < k; i++ )
        sum += nums[i];

    max_sum = sum;

    for ( int i = k; i < numsSize; i++ ) {
        sum = sum - nums[i-k] + nums[i];        
        max_sum = ( sum > max_sum ) ? sum : max_sum;
    }    

    return max_sum / k;
}
